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
		scanf("%s",&name);//�ƽ�Ű �ڵ带 �̿���. name �̶� �迭�� ����ҋ��� �迭�� ������ ���ؾ� ������ �׳�name �� name[0]�� ����. 
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
