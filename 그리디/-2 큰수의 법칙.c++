#include<stdio.h>
#include<algorithm> //sort 함수 사용

int main(){
	int N,K,M,A[1001]={0,},first,second,sum=0;
	scanf("%d %d %d",&N,&K,&M); //N(원소개수) K(숫자가 더해지는 횟수)  M(M번 더하기)
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	std::sort(A,A+N);
	first=A[N-1];
	second=A[N-2];
	
	sum+=K/(M+1)*(first*M+second);// (6,6,6,5) 이런식으로 한 쌍을 만들어 K중에 몇세트가 들어가는지
	sum+=K%(M+1)*(first);    //나머지는 무조건 first로만 이루어져 있기 때문(6)
		
	printf("%d",sum);
	return 0;
}
