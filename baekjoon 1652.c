#include <stdio.h>

void find_sleeping_space()
{
	int N;
	scanf("%d",&N);
	int i,j;
	int T_col_cnt = 0;
	int T_row_cnt = 0;
	int col_cnt = 0;
	int row_cnt = 0;
	char A[101][101];
	getchar();//()안에 들어있는게 입력되어야지 다음으로 넘어간다  getchar():엔터키가 나와야 끝났다고 인식함. 
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%c",A[i][j]);
		}
		getchar();
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			if(A[i][j]=='.'){
				col_cnt++;
			}
			else if(A[i][j]=='X')
			{
				if(col_cnt>=2){
					T_col_cnt++;
				}
				col_cnt = 0;
			}
			if(A[j][i]=='.'){
				row_cnt++;
			}
			else if(A[j][i]=='X')
			{
				if(row_cnt>=2){
					T_row_cnt++;
				}
				row_cnt=0;
			}
		}
		if(col_cnt>=2){
			T_col_cnt++;
		}
		if(row_cnt>=2){
			T_row_cnt++;
	    }
		col_cnt = row_cnt =0;	
	} 
	printf("%d %d",T_col_cnt,T_row_cnt);
}

int main(void)
{
	find_sleeping_space();
	return 0;
}
