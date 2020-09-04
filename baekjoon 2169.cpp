#include<iostream>
 
#define endl "\n"
#define MAX 1000
#define R_INF -987654321//초기값을 위하여. 
using namespace std;
 
int N, M, Answer;
int MAP[MAX][MAX];
int Cost[MAX][MAX][3];// (a,b)에 c 방향으로 들어왔을 떄, 최댜값 구하기 위해. 
bool Visit[MAX][MAX];// 참 혹은 거짓이로 갔다왔는지 아닌지 판단. 
 
int dx[] = { 0, 0, 1 }; // 왜냐하면 상으로는 못 움직이고 좌 우 아래로만 가능하기 떄문에 좌표표시. 
int dy[] = { 1, -1, 0 };

int Bigger(int A,int B) {if (A>B) return A; return B;}

void Input(){
	cin >> N >> M;
	for(int i=0;i<N;i++)
	    for(int j=0;j<M;j++)
	        cin >> MAP[i][j];
}

int DFS(int x,int y,int Dir){
	if(x==N-1&&y==M-1) return MAP[x][y];//막약에 범위를 넘어가면. 
	if(Cost[x][y][Dir]!=R_INF) return Cost[x][y][Dir];
	
	Visit[x][y] = true;
	
	int Biggest_Value = R_INF;
	
	for(int i = 0;i<3;i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx >= 0 && ny >= 0 && nx < N && ny<M){
			if(Visit[nx][ny]==false){
				Biggest_Value = Bigger(Biggest_Value,DFS(nx,ny,i));
			}
		}
	}
	Visit[x][y]=false;
	Cost[x][y][Dir] = MAP[x][y] + Biggest_Value;
	return Cost[x][y][Dir];
}

void Solution(){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            Cost[i][j][0] = R_INF;
            Cost[i][j][1] = R_INF;
            Cost[i][j][2] = R_INF;
        }
    }
    Answer = DFS(0, 0, 0);
    cout << Answer << endl;
}
 



void Solve(){
	Input();
	Solution();
}

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	Solve();
	return 0;
}
 

