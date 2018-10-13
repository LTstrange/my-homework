#include<iostream>
using namespace std;
int main(){
	int a;
	int n=2,sum=0;
	for(;sum<1500;n+=2){
		a=n*10+2;
		sum+=a;
		if(n==26){
			cout<<sum<<' '<<a<<endl;
		}
	}
	cout<<n-4<<endl;
	return 0;
}

