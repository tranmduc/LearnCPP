#include<bits/stdc++.h>
using namespace std;

void bubbleSort(float a[10000],int n){
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
}

int main(){
	int n;
	float sum=0,average;
	cin >> n;
	float a[10000];
	for(int i=0;i<n;i++) cin >> a[i];
	bubbleSort(a,n);
	cout <<"So lon nhat: "<<a[0]<<endl<<"So nho nhat: "<<a[n-1]<<endl;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	average=sum/n;
	cout << "Trung binh cong: "<<average<<endl<<"So nho hon trung binh cong: ";
	for(int i=0;i<n;i++){
		if(a[i]<average) cout << a[i] <<" ";
	}
	cout << endl<<"So lon hon trung binh cong: ";
	for(int i=0;i<n;i++){
		if(a[i]>average) cout << a[i] <<" ";
	}
	return 0;
	
}
