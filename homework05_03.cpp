#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float x,t;
	cin>>t;
	if (t>3)
	{
		x = 5+(t-3)*2;
		if (x>40)
			x = 40;
	}
	else
		x=5;
	cout<<fixed<<setprecision(2)<<x<<endl;
	return 0;
}
