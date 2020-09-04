#include <stdio.h>

void Yogurt()
{

	int N; int i,j;int cnt;
    for(i=0;i<3;i++)
    {
    	cnt = 0;
    	for(j=0;j<4;j++)
        {
    	    scanf("%d",&N);
    	    if(N==1)
    	    {
    	    	cnt++;
			}
    	
	    }
	    if(cnt==0)
	    {
	    	printf("D\n");
		}
		else if(cnt==1)
		{
			printf("C\n");
		}
		else if(cnt==2)
		{
			printf("B\n");
		}
		else if(cnt==3)
		{
			printf("A\n");
		}
		else
		{
			printf("E\n");
		}
	}
}

int main(void)
{
	Yogurt();
	return 0;
}
	
