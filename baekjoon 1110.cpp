#include <stdio.h>


void sum_cycle(){
	int N;
	int cnt = 0;
	scanf("%d",&N);//N�� �ּ� �ȿ� %d������ ���ڸ� �����Ѵ�. �׳�N�� �Է��ϸ� N�� ���� �̷��ϴ°Ͱ� ����.
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
