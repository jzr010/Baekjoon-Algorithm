#include <stdio.h>



int main(void)
{
	int a,b,c,i;
	scanf("%d %d %d", &a, &b, &c);
	for(i=a;i>=1;i--)
	{
		if(a%i==0)
		{
			if(b%i==0)
			{
				if(c%i==0)
				{
					printf("%d",i);
				    break;	
				}
			}
		}
	
	}
	return 0;
}
