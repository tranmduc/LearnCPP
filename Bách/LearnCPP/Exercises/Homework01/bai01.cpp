#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,t100=0,t20=0,t5=0,t1=0;
	cin >> t;
	while(t>=100){
		t100++;
		t-=100;
	}
	while(t>=20){
		t20++;
		t-=20;
	}
	while(t>=5){
		t5++;
		t-=5;
	}
	while(t>=1){
		t1++;
		t-=1;
	}
	cout << "So to 100: "<<t100 << endl << "So to 20: "<<t20<<endl<<"So to 5: "<<t5<<endl<<"So to 1: "<<t1<<endl<<"Tong so to: "<<t100+t20+t5+t1;
}
