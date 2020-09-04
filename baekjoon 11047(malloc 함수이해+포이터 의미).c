#include <stdio.h>
#include <stdlib.h>

void min_coin(){
	int i,j;
	int N,M;
	int cnt = 0;
	scanf("%d %d",&N,&M);
	int *arr = (int*)malloc(sizeof(int)*N);
	//==> 앞에서 int *arr선언후 밑에서 arr = (int*)malloc(sizeof(int)*N)
	//int N개를 담을 수 있는 배열. 이 함수를 사용하는 이유는 만들어진 배열을 건드릴수 없어서.
	//배열은 한번 생성하고 나면 요소의 갯수를 수정할수 없어 그렇기 떄문에 이러한 단점을 극복하기 위해서 동적 메모리를 사용. 
	//malloc()은 힙에 생성하고자 하는 배열의 공간을 확보한 후 해당 배열의 시작 주소값을 리턴하는 함수. 그러므로 포인터를 사용.
	//여기서 포인터 변수 앞에 있는 자료형이 나타내는 의미는 해당 주소를 찾아가서 읽어올 데이터의 자료형을 뜻함. 
	//컴파일러 마다 자료형의 byte 크기가 차이나는 경우가 있어 sizeof()사용 하는 것이 좋음.
	//이렇게 동적 메모리를 사용하여 배열을 만드는 것을 동적 활당이라고 한다. 그러나 c언어에서는 heap에 생성한 메모리를 자동으로 소멸해주 지 않은다.
	//그러므로 생성한 동적메모리는 반드시 소멸해 주어야 함.==> free(주소). 
    /// 그리고 내생각: 메모리 주소를 받을 변수가 필요한 경우 포인터 변수를 사용해야됨. 
	for(i=0;i<N;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++){
		cnt += M/arr[N-i-1];
		M %= arr[N-i-1];
	}
	printf("%d",cnt);
	free(arr);
	
}
int main(){
	min_coin();
	return 0;
}
