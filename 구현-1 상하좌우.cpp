#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	int N=0;
	int dx=0,dy=0;
	char B[4]={'L','R','U','D'};
	int x[4]={0,0,-1,1},y[4]={-1,1,0,0};
	
	
	cin>>N;
	getchar();              //   <- 문자열을 행으로 받아들이는 코드 (ex:R R R U => R R R U)
 	string str;             //          ,그대신 size는 8 '\0'도 넣기 때문
 	getline(cin,str);
	
	for(int i=0;i<sizeof(str);i++){
		if(str[i]=='\0') continue; 
		for(int j=0;j<4;j++){
			if(B[j]==str[i]){
				if(dx+x[j]<0||dx+x[j]>=N||dy+y[j]<0||dy+y[j]>=N) continue; //범위를 벗어나면 무시
				dx+=x[j];     //x와 y의 위치 초기화
				dy+=y[j];
			}
		}
	}
	dx++;
	dy++;        //x와 y를 0,0부터 시작했기 때문
	printf("%d %d",dx,dy);
	return 0;
}
