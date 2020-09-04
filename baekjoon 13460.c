#include <stdio.h>

//the size of map(2 integer),map 
//


void Map(){
	int N,M;int i,j;
	char* map;
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			scanf("%s",&map[N][M]);	
		}
	}
	
}

int main(){
    Map();
	
	return 0;
}
