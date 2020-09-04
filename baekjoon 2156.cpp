#include <stdio.h>

int max(int a,int b){
	return a > b ? a : b;
} 

int main(){
	int i,n;
	int arr[10001]={};
	int dp[10001]={};
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<3;i++){
		if(i==1){
			dp[i]=arr[i];
		}
		else{
			dp[i]=arr[i]+arr[i-1];
		}
	}
	
	for(i=3;i<=n;i++){
		int result = 0;
		result = max(dp[i-1],dp[i-2]+arr[i]);
		result = max(result,arr[i]+arr[i-1]+dp[i-3]);
		dp[i]=result;
	}
	printf("%d\n",dp[n]);
}
