#include <iostream>
#include <vector>
#include <queue>

#define max_int 501
using namespace std;

//�ð� ���⵵: O(n+m)
//���� ���⵵: O(m)
//����� �˰���: BFS
//����� �ڷᱸ��: ���� ����Ʈ

int n, m, a, b, result;

// ���͸� ���� ����Ʈ�� ����մϴ�.
vector<int> v[max_int];

// ���� �������� ������ �Ÿ� ������ ���� �迭�Դϴ�.
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
                // ���� �湮�� ������ �Ÿ��� ���� ���������� �Ÿ� +1�̵˴ϴ�.
                check[next] = check[node] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    scanf("%d %d", &n, &m);

    // 1. ������ ������ �Է¹����鼭 ����� �׷����� ������ݴϴ�.
    for(int i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);
    }

    // 2. ���� ������ �Ÿ��� 1�� üũ�ϰ�, BFS Ž���� �����մϴ�.
    check[1] = 1;
    bfs(1);

    // 3. ���� ������ 1�� üũ�߱� ������ �Ÿ��� 3������ ������ ������ ���� �ݴϴ�.
    // check[i] = 0�̸� �湮�� �� ���� �����Դϴ�. check[i] = 1�̸� ���� �����Դϴ�.
    result = 0;
    for(int i=2; i<=n; i++){
        if(check[i] == 2 || check[i] == 3){
            result++;
        }
    }

    // 4. ��� ���
    printf("%d\n", result);
}
