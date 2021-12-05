#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int x,dp[1000001]={0,};
	scanf("%d",&x);
	for(int i=2;i<=x;i++){
		dp[i]=dp[i-1]+1;     //1뺸 값(+1 하는 이유는 counting 하는것)
		if(x%2==0) dp[i]=min(dp[i],dp[x/2]+1);
		if(x%3==0) dp[i]=min(dp[i],dp[x/3]+1);
		if(x%5==0) dp[i]=min(dp[i],dp[x/5]+1);
	}
	printf("%d",dp[x]);
	return 0;
}
