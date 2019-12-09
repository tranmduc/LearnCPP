#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count=0,sum=0;
	int n1=n;
	while(n1>0){
		n1/=10;
		count++;
	}
	n1=n;
	while(n>0){
		sum+=pow(n%10,count);
		n/=10;
	}
	if(sum==n1) cout << "YES";
	else cout <<"NO";
	return 0;
}
