#include <stdio.h>
#include <string.h>
void bubble_sort(char *N)// 2에서 받은 문자를 매개 변수로 사용 포인터 이기 떄문에 글자들을 사용 배열이 아니라  즉 배열 안에 글씨들을 가르친다  3                         문자형의 어떠한 값을 가르키는 N포인터를  선언(살짝 int i;랑 비슷함.) 결국에는 이함수의 매개변수는 문자 즉 N 
{
    int i, j;
    int len = strlen(N) ;
    char temp;
    for (i = 0;i < len;i++)
    {
        for (j = 0;j <len-(i+1);j++)
        {
            if (N[j] < N[j + 1])
            {
                temp = N[j];
                N[j] = N[j + 1]; /// 포인터에서 배운 swap 함수랑 비슷. 
                N[j + 1] = temp;
            }
        }
    }
}
void sort_inside()
{
    char N[10000];//N이라는 배열 공간이 생김   1 
    scanf("%s", &N);//N이라는 공간 안에 문자를 입력함  2 
    bubble_sort(N);
    printf("%s", N);
}
int main()
{
    sort_inside();
}
