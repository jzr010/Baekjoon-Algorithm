#include <iostream>

using namespace std;

int n;
int a[10001];//배열을 전역변수로 설정해 놓을시 0으로 초기화가 됨. 

int main(void){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		a[x]++; 
	}
	for(int i =0;i<10001;i++){
		while(a[i]!=0){
			printf("%d\n",i);
			a[i]--;
		}
	}
}
