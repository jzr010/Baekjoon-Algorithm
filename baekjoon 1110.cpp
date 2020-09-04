#include <stdio.h>


void sum_cycle(){
	int N;
	int cnt = 0;
	scanf("%d",&N);//N의 주소 안에 %d형식의 숫자를 저장한다. 그냥N을 입력하면 N의 값을 이력하는것과 같음.
	int chk_num = N;
	while(1){
		N=((N%10)*10)+(N/10+N%10)%10;
		cnt++;
		if(chk_num==N){
			break;
		}
	} 
	printf("%d",cnt);	
}

int main(){
	

    sum_cycle();
	return 0;
}
