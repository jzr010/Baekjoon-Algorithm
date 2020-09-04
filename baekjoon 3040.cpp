#include <stdio.h>

void seven_dwarf()
{
	int sum=0; int dwarf[9];int i,j,k;
	
	for(i=0;i<9;i++)
	{
		scanf("%d",&dwarf[i]);
		sum += dwarf[i];
	}
	
	for(i=0;i<7;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(sum-(dwarf[i]+dwarf[j])==100)
			{
				for(k=0;k<9;k++)
				{
					if(k!=j && k!=i)
					{
						printf("%d\n",dwarf[k]);
					}
				}
				
		
			}
		}
	}
	
	
}

int main(void)
{
	seven_dwarf();
	return 0;
}
