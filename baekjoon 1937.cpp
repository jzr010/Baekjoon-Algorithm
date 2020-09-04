#include <iostream>

#define endl "\n"
#define MAX 500
using namespace std;

int N,Answer;
int MAP[MAX][MAX];
int DP[MAX][MAX];

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int Bigger(int A, int B) { return A > B ? A : B; }
 
void Input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> MAP[i][j];
        }
    }
}                                                                           
 
int Move(int x, int y)
{
    if (DP[x][y] != 0) return DP[x][y];
    DP[x][y] = 1;
 
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
 
        if (nx >= 0 && ny >= 0 && nx < N && ny < N)
        {
            if (MAP[x][y] < MAP[nx][ny])
            {
                DP[x][y] = Bigger(DP[x][y], Move(nx, ny) + 1);
            }
        }
    }
    return DP[x][y];
}
 
void Solution()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Answer = Bigger(Answer, Move(i, j));
        }
    }
    cout << Answer << endl;
}
 
void Solve()
{
    Input();
    Solution();
}



int main(void){
	ios_base::sync_with_stdio(false);//평소에는 c와c++의 호환성을 위해 입출력 스트림이 서로 동기화 되어 있는디, 동기화를 끊고 사용하는 buffer의 수를 줄여 c++의 입출력 객체 실해 시간을 향상시키는 것. 
	cin.tie(NULL);//cin.tie(NULL)을 해주게 되면 cin을 cout으로부터 untie하게 되면서 속도의 향상이 나타난다
	cout.tie(NULL);
	
	Solve();
	
	return 0;
}
