#include<stdio.h>
#include<algorithm>

int main(){
	int a,b; //a=행 b=열
	int A[100][100]={0,},max=-100;
	scanf("%d %d",&a,&b);
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&A[i][j]); //행렬 초기화
		}
	}
	for(int i=0;i<a;i++){  
		std::sort(A[i],A[i]+b); //각 행 sort하기
		if(max<A[i][0]) max=A[i][0]; //sort된 행중에서 가장 큰 수 찾기
	}
	printf("%d",max);
	return 0;
}
