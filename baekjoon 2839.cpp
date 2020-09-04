#include <stdio.h>

int main(void)
{
	int n,i,j;
	
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if((3*i)+(5*j)==n)
			{
				printf("%d",i+j);
				return 0;
			}
			
		}
	}
	printf("-1");
	return 0;
}
