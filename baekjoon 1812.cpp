#include <stdio.h>

int main(void)
{
    int number; int i,j;
    int* arr[1000]; int sum = 0;
    int temp = 0;
    scanf("%d",&number);
    
    for(i=0;i<number;i++)
    {
    	scanf("%d",&arr[i]);
    	sum += arr[i];
	}
    
    printf("%d",sum/2);
    
    
    
	return 0;
}
