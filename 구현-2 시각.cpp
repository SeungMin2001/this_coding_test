#include<stdio.h>
int main(){
	int N,count=0;
	scanf("%d",&N);
	for(int c=0;c<=N;c++){
		for(int i=0;i<60;i++){
			for(int j=0;j<60;j++){
				if(c%10==3||i%10==3||j%10==3||i/10==3||j/10==3) count++;  //조심해야할 부분
			}                    					  //예를들어 ==3 으로 판별할경우 32같은 숫자는
		} 								  //3으로 인식 안함 따라서 십의자리도 확인 해줘야함
	}
	printf("%d",count);
	return 0;
}
