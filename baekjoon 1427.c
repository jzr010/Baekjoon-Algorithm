#include <stdio.h>
#include <string.h>
void bubble_sort(char *N)// 2���� ���� ���ڸ� �Ű� ������ ��� ������ �̱� ������ ���ڵ��� ��� �迭�� �ƴ϶�  �� �迭 �ȿ� �۾����� ����ģ��  3                         �������� ��� ���� ����Ű�� N�����͸�  ����(��¦ int i;�� �����.) �ᱹ���� ���Լ��� �Ű������� ���� �� N 
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
                N[j] = N[j + 1]; /// �����Ϳ��� ��� swap �Լ��� ���. 
                N[j + 1] = temp;
            }
        }
    }
}
void sort_inside()
{
    char N[10000];//N�̶�� �迭 ������ ����   1 
    scanf("%s", &N);//N�̶�� ���� �ȿ� ���ڸ� �Է���  2 
    bubble_sort(N);
    printf("%s", N);
}
int main()
{
    sort_inside();
}
