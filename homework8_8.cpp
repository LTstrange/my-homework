#include<iostream>
using namespace std;

bool find(int n){
	if (n==2||n==3||n==5||n==7){
		return true;
	}
	else if (n%2==0||!(n%3)||!(n%5)||!(n%7)){
		return false;
	}
	else{
		return true;
	}
}

int main(){
	int n=0;
	bool flag=1;
	cin>>n;
	for (int i=2;i<=n;i++){
		if (n%i==0){
			if (find(i)){
				cout<<i<<' ';
				flag = 0;
			}
		}
	}
	if (flag){
		cout<<"No Answer";
	}
	
	return 0;
}
