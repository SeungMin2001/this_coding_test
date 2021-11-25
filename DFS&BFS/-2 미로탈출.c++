#include<stdio.h>
#include<queue>
using namespace std;
int a,b,list[201][201]={0,},check[201][201]={0,},cnt=1;
int go_a[4]={-1,1,0,0}; //상 하 좌 우
int go_b[4]={0,0,-1,1};
queue<pair<int,int>>q; 
int bfs(int x,int y){
	check[1][1]=1;
	q.push(make_pair(x,y));
	while(q.empty()!=true){   //큐가 비어질때까지 루프
		for(int i=0;i<4;i++){  //리스트이므로 상,하,좌,우 만 간선으로 연결
			if(x+go_a[i]>0&&y+go_b[i]>0&&x+go_a[i]<=a&&y+go_b[i]<=b&&list[x+go_a[i]][y+go_b[i]]==1){ //범위,(0,1)구별조건
				q.push(make_pair(x+go_a[i],y+go_b[i]));
				check[x+go_a[i]][y+go_b[i]]=check[x][y]+1;//탐색을 하나씩 할수록 1증가(마지막에 얼만큼 왔는지 알아낼려고)
				if(x+go_a[i]==a&&y+go_b[i]==b){ //종착지점 확인
					printf("%d",check[x+go_a[i]][y+go_b[i]]);
					return 0;
				}
			}
		}
		q.pop();
		x=q.front().first;  //큐에 그다음 원소로 바꿔주고 다시 bfs 시작
		y=q.front().second;
	}
	return 0;
}
int main(){
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			scanf("%d",&list[i][j]);
		}
	}
	bfs(1,1);
	return 0;
}
