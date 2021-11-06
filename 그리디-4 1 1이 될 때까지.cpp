#include<stdio.h>

int main(){
	int N,K,count=0;
	scanf("%d %d",&N,&K);
	while(N!=1){
		if(N%K==0){
			N=N/K; //나누기
		}
		else {
			N--;  //빼기
		}
		count++;
	}
	printf("%d",count);
	return 0;
}
