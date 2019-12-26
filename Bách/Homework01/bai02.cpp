#include<bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c;
	cin >> a >> b >> c;
	if(a==0){
		if(b==0){
			if(c==0) cout <<"Pt vo so nghiem";
			else cout <<"Pt vo nghiem";
		}
		else cout << "Pt co nghiem duy nhat: "<<-c/b;
	}
	else{
		float d=b*b-4*a*c;
		if(d<0) cout <<"Pt vo nghiem";
		if(d==0) cout << "Pt co nghiem kep: "<<-b/2*a;
		if(d>0){
			cout << "Pt co 2 nghiem phan biet" << endl <<"x1= "<<(-b-sqrt(d))/(2*a)<<endl<<"x2= "<<(-b+sqrt(d))/(2*a);
		}
	}
	return 0;
}
