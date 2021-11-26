#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int a,int b){
	return a>b;
}
int main(){
	int n,k,data=0,swap=0,sum=0;
	vector<int>A;
	vector<int>B;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&data);
		A.push_back(data);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&data);
		B.push_back(data);
	}
	sort(A.begin(),A.end()); //오름차순
	sort(B.begin(),B.end(),compare); //내림차순(compare비교함수 사용)
	for(int i=0;i<k;i++){
		swap=A[i]; //스왑
		A[i]=B[i]; 
		B[i]=swap;
	}
	for(int i=0;i<n;i++){
		sum=sum+A[i]; //최댓값 구하기
	}
	printf("%d",sum);
return 0;
}
