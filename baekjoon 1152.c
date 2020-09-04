#include <stdio.h>
#include <string.h>

void verb()
{
	char str[10000003];
	fgets(str,10000003,stdin); // stdin(standars input) 에서 10000003만큼 읽은다음 str에 담는다. 
	int i=0;
	int cnt = 0;
	for(i;str[i];i++)
	{
		if(str[i]==' '&&str[i+1] != '\n')
		{
			cnt++;
		}
	}
	if(str[0] == '\n' || str[0]==' ')
	{
		cnt--;
	} 
	if(str[strlen(str)-1]==' ')
	{
		cnt--;
	}
	printf("%d",cnt+1);
}

int main(void)
{
	verb();
	
} 
