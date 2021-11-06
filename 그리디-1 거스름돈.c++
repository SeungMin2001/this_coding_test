#include<stdio.h>

int main(){
	int N=1350,A[4]={500,100,50,10},val=0,count=0;
	while(true){
		val+=N/A[count];
		N%=A[count];
		if(A[count]==10) break;
		count++;
	}
	printf("%d",val);
	return 0;
}
