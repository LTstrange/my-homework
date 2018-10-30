#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n=0;
	cin>>n;
	if (n>=1&&n<=10000){
		double sum=0;
		for (float i=1;i<=n;i++){
			sum+= 1.0/((i*(i+1))*0.5);
		}
		cout<<fixed<<setprecision(4)<<sum;
	}
}

