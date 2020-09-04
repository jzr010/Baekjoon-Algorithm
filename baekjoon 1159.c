#include <stdio.h>

void basketball_game()
{
	int N;
	char name[40];
	int arr[27]={0};
	int i;
	int flag = 0;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s",&name);//아스키 코드를 이용함. name 이란 배열을 사용할떄는 배열의 순서를 말해야 하지만 그냥name 이 name[0]과 같다. 
		arr[name[0]-'a']++;
	}
	for (i=0;i<26;i++)
	{
		if(arr[i]>=5)
		{
			printf("%c",i+'a');
			flag = 1;
		}
	}
	if(flag==0)
	{
		printf("PREDAJA");
	}
	
}

int main()
{
	backetball_game(); 
	return 0;
}
