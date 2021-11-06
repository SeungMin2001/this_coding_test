#include<stdio.h>
int main(){
	int A[9][9]={0,};
	int dx[8]={-2,-2,-1,1,2,2,-1,1};  
	int dy[8]={-1,1,2,2,-1,1,-2,-2};
	char horse[3]={'\0'};
	scanf("%s",horse);
	int x=horse[0]-=96;    //입력들어온 나이트에 위치를 int형으로 바꾸어주는 코드
	int y=horse[1]-=48;
	int count=0;
	
	for(int i=0;i<8;i++){
		if(x+dx[i]>=1&&x+dx[i]<=8&&y+dy[i]>=1&&y+dy[i]<=8){ //범위 안에 있는지 확인하는 코드
			count++;
		}
		else continue;
	}
	
	printf("%d",count);
	return 0;
}
