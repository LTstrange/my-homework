#include<iostream>
#include<cmath>
using namespace std;

int fun(int a,int n){
	int res=0;
	for (int i=0;i<n;i++){
		res += (n-i)*pow(10,i)*2;
		
	}
	return res;
}

int main(){
	int a=0,n=0;
	cin>>a>>n;
	int res=0;
	res = fun(a,n);
	cout<<res;
	return 0;
}
