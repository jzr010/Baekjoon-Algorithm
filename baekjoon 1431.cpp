#include <iostream>
#include <algorithm>
using namespace std;

string a[20000];//string과 char은 다르다. 
int n;

int getSum(string a){
	int length = a.length(),sum=0;
	for(int i=0;i < length; i++){
		if(a[i]-'0'<=9 && a[i]-'0'>=0){
			sum += a[i]-'0';
		}
	}
	return sum;
}

bool compare(string a,string b){//및 조건이 참이면 앞에 인자 출력 
	if(a.length()<b.length()){//길이가 작은게 먼저 나간다. 기준. 
		return 1;
	} else if(a.length()>b.length()){
		return 0;
	} 
	else {
		int aSum = getSum(a);
		int bSum = getSum(b);
		if(aSum!=bSum){
			return aSum < bSum;
		} else{
			return a < b;
		}	
	}
}

int main(void){
	cin >> n;
	for(int i = 0;i <n;i++){
		cin >> a[i];
	}
	sort(a,a+n,compare);
	for(int i = 0;i<n;i++){
        cout << a[i] << '\n'; 
	}
	return 0;
}
