#include <stdio.h>
int visit[60][60];map[60][60];num;H,W;
int dx[]={0,1,1,1,0,-1,-1,-1,};
int dy[]={-1,-1,0,1,1,1,0,-1};

void reset(int *,int);

int search(int y;int x){
	if(!map[y][x]||visit[y][x]){
		return 0;
	}
	visit[y][x]=1;
	for(i=0;i<8;i++){
		int xx = x + dx[i];
		int yy = y + dy[i];
		if(map[yy][xx]&&!visit[yy][xx]){
			search(yy)(xx);
		}
	}
	return 1;
}

int main(){
	while(1){
		num=0;
		reset(map,sizeof(map)/4);
		reset(visit,sizeof(visit)/4);
		scanf("%d %d",&W,&H);
		
		if(W==0&&H==0){
			return 0;
		}
		for(i=0;i<=H;i++){
			for(j=0;j<W;j++){
				scanf("%d",&map[i][j]);
			}
		}
		for(i=0;i<=H;i++){
			for(j=0;j<W;j++){
				num=search(i,j);
			}
		}
		printf("%d\n",num);
	}
}

void reset(int *arr,int size){
	for(i=0;i<size;i++){
		arr[i]=0;
	}
}

