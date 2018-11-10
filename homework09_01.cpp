#include<iostream>
#include<cmath>
using namespace std;

int func(int n){
	int result=2;
	for (int i=0;i<n-1;i++){
		result *= 2;
	}
	if (n==0) return 1;
	return result;
}

int main(){
	int k=0;
	cin>>k;
	for (int i=0;i<k;i++){
		int f;
		f= func(func(i))+1;
		cout<<f<<endl;
	}
	return 0;
}
