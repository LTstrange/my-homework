#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	long double pi=0;
	pi = 4*atan((long double)1.0/5)-atan((long double)1.0/239);
	cout<<setprecision(6)<<pi*4;
}

