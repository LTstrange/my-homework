#include<iostream>
#include<iomanip>
using namespace std;

double FUN(int n){
	float a=1,b=2,c;
	double res=0;
	for (int i=0;i<n;i++){
		res += b/a;
		c = b;
		b = c+a;
		a = c;
	}
	return res;
}

int main(){
	int n=0;
	cin>>n;
	cout<<fixed<<setprecision(4)<<FUN(n);
	return 0;
}
