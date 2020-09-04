#include<iostream>
#include<cstring>
 
typedef long long ll;
#define endl "\n"
#define MAX 100 + 1
using namespace std;
 
ll DP[MAX];
int N;
 
void Initialize()
{
    memset(DP, 0, sizeof(DP));
}
 
void Input()
{
    cin >> N;
}
 
void Solution()
{
    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 1;
    for (int i = 3; i <= N; i++)
    {
        DP[i] = DP[i - 2] + DP[i - 3];
    }
    cout << DP[N] << endl;
}
 
void Solve()
{
    int Tc;
    cin >> Tc;
    for (int T = 1; T <= Tc; T++)
    {
        Initialize();
        Input();
        Solution();
    }
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}


