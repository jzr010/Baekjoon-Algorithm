#include<iostream>
#include<queue>
#include<vector>
 
using namespace std;
 
int N, W;
const int INF = 100000007;
vector<pair<int, int> > qu;
queue<int> order;
int cache[1001][1001];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> W;
    int x,y;
    qu.push_back({ 0,0 });
    for (int i = 0; i < W; i++) {
        cin >> x >> y;
        qu.push_back({ x,y });
    }
    for (int i = 0; i < W; i++) {
        for (int j = 0; j < W; j++) {
            cache[i][j] = -1;
        }
    }
    cout << dp() << endl;
    findOrder();
    while (!order.empty()) {
        cout << order.front() << endl;
        order.pop();
    }
    return 0;
}


