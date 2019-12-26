#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a=n/100;
	int c=n%10;
	int b=(n%100-c)/10;
	cout <<100*c+10*b+a;
	return 0;
}
