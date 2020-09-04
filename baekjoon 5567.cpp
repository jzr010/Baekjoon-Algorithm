#include <iostream>
#include <vector>
#include <queue>

#define max_int 501
using namespace std;

//시간 복잡도: O(n+m)
//공간 복잡도: O(m)
//사용한 알고리즘: BFS
//사용한 자료구조: 인접 리스트

int n, m, a, b, result;

// 벡터를 인접 리스트로 사용합니다.
vector<int> v[max_int];

// 시작 정점으로 부터의 거리 정보를 담을 배열입니다.
int check[max_int];

void bfs(int start){
    check[start] = 1;
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(int i=0; i<v[node].size(); i++){
            int next = v[node][i];
            if(check[next] == 0){
                // 다음 방문할 정점의 거리를 현재 정점까지의 거리 +1이됩니다.
                check[next] = check[node] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);

    // 1. 간선의 정보를 입력받으면서 양방향 그래프로 만들어줍니다.
    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }

    // 2. 시작 정점을 거리를 1로 체크하고, BFS 탐색을 시작합니다.
    check[1] = 1;
    bfs(1);

    // 3. 시작 정점을 1로 체크했기 때문에 거리가 3이하인 정점만 개수에 더해 줍니다.
    // check[i] = 0이면 방문할 수 없는 정점입니다. check[i] = 1이면 시작 정점입니다.
    result = 0;
    for(int i=2; i<=n; i++){
        if(check[i] == 2 || check[i] == 3){
            result++;
        }
    }

    // 4. 결과 출력
    printf("%d\n", result);
}
