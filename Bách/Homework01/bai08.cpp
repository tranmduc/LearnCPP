#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int sum1=0,sum2=0;
	for(int i=1;i<=a/2;i++) if(a%i==0) sum1+=i;
	for(int i=1;i<=b/2;i++) if(b%i==0) sum2+=i;

	if(sum1==b&&sum2==a) cout << "YES";
	else cout << "NO";
	return 0;
}
