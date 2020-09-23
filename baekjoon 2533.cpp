//문제를 풀떄 너무  컴퓨터적으로 생각 하지말고 , 우선 의미를 알자.
//생각부터하고 손가락 움직이기.
 


#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int N;
const int MAX = 1000001;
vector<int> friends[MAX];
vector<int> dirnode[MAX];
bool visited[MAX];
int cache[MAX][2]; 

void dfs(int num) {
	visited[num] = true;
	for(int i = 0; i < friends[num].size(); i++) {
		int next = friends[num][i];//dfs의 원리 이해 부탁. 
		if(!visited[next]) {
			dirnode[num].push_back(next);
			dfs(next); 
		}
	}
}

int gea(int num, bool early) {
	int &result = cache[num][early];
	if(result != -1)
        return result;
        
    if(early) {
    	result = 1;
    	for(int i = 0; i < dirnode[num].size(); i++) {
    		int next = dirnode[num][i];
    		result += min(gea(next, true), gea(next, false));
		}
	}   
	else {
		result = 0;
		for(int i = 0; i < dirnode[num].size(); i++) {
			int next = dirnode[num][i];
			result += gea(next, true);
		}
	}
	return result;
}

int main(void) {
	cin >> N;
	for(int i = 0; i < N - 1; i++) {
		int n1, n2;
		cin >> n1 >> n2;
		friends[n1].push_back(n2);
		friends[n2].push_back(n1);
	}
	memset(cache, -1, sizeof(cache));
	dfs(1);
	cout << min(gea(1,false),gea(1,true)) << endl;
	return 0;
}


