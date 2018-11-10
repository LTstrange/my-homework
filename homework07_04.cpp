#include<iostream>

using namespace std;

int main(){
	int i;
	double h,m=0, t;
	cin>>h;
	t=h;
	for(i=1;i<10;i++)
	{
		h=h/2;
		m=m+2*h;
	}
	m += t;
	cout<<"m = "<<m<<endl;
	cout<<"h = "<<h/2<<endl;
	return 0;
}
