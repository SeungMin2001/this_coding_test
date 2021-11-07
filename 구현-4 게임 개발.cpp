#include<stdio.h>
int dx,dy,index,a=0,b=0,A[50][50],check[50][50],key=0,end=0,count=1;
int x[4]={-1,0,1,0},y[4]={0,-1,0,1},qqqq[4]={0,3,2,1};   //0 3 2 1 북 서 남 동
void left(void){
	index++;
	if(index==4) index=0;
}
int main(){
	scanf("%d %d",&a,&b);
	scanf("%d %d %d",&dx,&dy,&key);  //(dx,dy)시작 index쪽 바라봄->(북 서 남 동)
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&A[i][j]);
			check[i][j]=A[i][j];
		}
	}
	check[dx][dy]=1;
	for(int i=0;i<4;i++){
		if(qqqq[i]==key){
			key=qqqq[i];
			index=i;
		}
	}
	while(1){
		left();																	                                //왼쪽으로 턴
		if(A[dx+x[index]][dy+y[index]]==0&&check[dx+x[index]][dy+y[index]]==0){ //갈수 있는지 확인
			dx+=x[index];													                              	//갈수 있으면 감
			dy+=y[index];
			count++;
			check[dx][dy]=1;
			end=0;
		}
		else end++;																//못가면 end++ 함
		if(end==4){																//end==4 즉 4방향 다 못가면 뒤로 돌기
			end=0;
			left();
			left();
			if(A[dx+x[index]][dy+y[index]]==0&&check[dx+x[index]][dy+y[index]]==1){//뒤로 돌았는데 육지면 감
				dx+=x[index];
				dy+=y[index];
				left();
				left();
			}	
			else break;																//뒤로 돌았는데 바다면 게임 끝
		}
	}
	printf("%d",count);
	return 0;
}
