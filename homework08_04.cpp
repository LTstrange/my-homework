#include<iostream>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	for (int i=0;i<2*n-1;i++){
		if (i+1<=n){
			for (int x=0;x<n-i;x++) cout<<' ';
			for (int x=0;x<i+1;x++) cout<<i<<endl;
		}
		else 
	}
}

