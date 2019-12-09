#include<bits/stdc++.h>
using namespace std;

bool ktTamGiacVuong(float a,float b,float c){
	if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b) return true;
	else return false;
}

bool ktTamGiacCan(int a,int b,int c){
	if(a==b || b==c || c==a) return true;
	else return false;
}

int main(){
	float a,b,c;
	cin >> a >> b >> c;
	if(a+b>c && b+c>a && c+a>b){
		if(ktTamGiacCan(a,b,c)==true && ktTamGiacVuong(a,b,c)==false){
			if(a==b && b==c){
			cout <<"Tam giac deu";return 0;
			}
			else{
			cout <<"Tam giac can";return 0;
			}
		}
		if(ktTamGiacVuong(a,b,c)==true){
			if(ktTamGiacCan(a,b,c)==true){
				cout <<"Tam giac vuong can"; return 0;
			} 
			else{
				cout <<"Tam giac vuong"; return 0;
			}
		}
		if(ktTamGiacVuong(a,b,c)==false && ktTamGiacCan(a,b,c)==false) cout<<"Tam giac thuong";
	}
	else cout << "Ko phai tam giac";
	return 0;
}
