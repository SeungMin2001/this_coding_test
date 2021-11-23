#include<bits/stdc++.h>
int N,M,A[1000][1000],check[1000][1000],count=0;
int dfs(int x,int y){
	if(0<=x&&0<=y&&x<N&&y<M&&A[x][y]==0&&check[x][y]==0){ //범위,체크조건
		check[x][y]=1;
		dfs(x+1,y);   //오,왼,아래,위 탐색
		dfs(x-1,y);
		dfs(x,y+1);
		dfs(x,y-1);
	}
	else{
		return 0;  //조건에 안맞으면 리턴
	}
	return 0;
}
int main(){
	scanf("%d %d",&N,&M);
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			scanf("%d",&A[i][j]);
			check[i][j]=A[i][j];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(A[i][j]==1||check[i][j]==1) continue;//체크조건 안맞으면 continue
			count++;   //한 집단의 개수
			dfs(i,j);
		}
	}
	printf("%d",count);
	return 0;
}
