#include<iostream>
using namespace std;

int func(int n){
	if (n==1||n==2||n==3) return 1;
	else return func(n-1)+func(n-3);
}

int main(){
	int n=0;
	cin>>n;
	cout<<func(n);
	return 0;
}
