#include<iostream>
 
#define endl "\n"
#define MAX 100000+1
typedef long long ll;
 
using namespace std;
 
int N;
ll Arr[MAX];
ll DP[MAX];
ll Answer;
 
ll Bigger(ll A, ll B) { if (A > B) return A; return B; }
 
void Input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
}
 
void Solution()
{
    DP[0] = Arr[0];
    Answer = DP[0];
    for (int i = 1; i < N; i++)
    {
        DP[i] = Bigger(DP[i - 1] + Arr[i], Arr[i]);
        Answer = Bigger(Answer, DP[i]);
    }
}
 
void Solve()
{
    Input();
    Solution();
 
    cout << Answer << endl;
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



