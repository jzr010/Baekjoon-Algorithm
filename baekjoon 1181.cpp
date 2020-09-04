#include <iostream>
#include <algorithm>
using namespace std;

string a[20000];//string과 char은 다르다. 
int n;

bool compare(string a,string b){//및 조건이 참이면 앞에 인자 출력 
	if(a.length()<b.length()){//길이가 작은게 먼저 나간다. 기준. 
		return 1;
	} else if(a.length()>b.length()){
		return 0;
	} else {
		return a<b; //string 에서 비교연산자는 자동으로 사전순으로 출력. 사전 기준으로 앞에 있는게 먼저나간다. 
	}
}

int main(void){
	cin >> n;
	for(int i = 0;i <n;i++){
		cin >> a[i];
	}
	sort(a,a+n,compare);
	for(int i = 0;i<n;i++){
		if(i>0 && a[i]==a[i-1]){
		    continue;	
		} else{
		    cout << a[i] << '\n';	
		}
	}
	return 0;
}
