#include <stdio.h>
#include <stdlib.h>

void turn(){
	int i;
	int N;
	int cnt = 0;
	scanf("%d",&N);
	int *arr = (int*)malloc(sizeof(int)*N);
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
		if(i+1 !=arr[i]){
			cnt++;
		}
		
		
	}
	printf("%d",cnt); 
	 
} 

int main(){
	turn();
	return 0; 
}
