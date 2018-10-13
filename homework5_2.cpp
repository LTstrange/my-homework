#include<iostream>
using namespace std;

int main()
{
	int x,a,b,c,d,s;
	cin>>x;
	a = x % 10;
	b = ((x-a)%100)/10;
	c = ((x-b*10-a)%1000)/100;
	d = ((x-100*c-10*b-a)%10000)/1000;
	a+=9;
	a=a%10;
	b+=9;
	b=b%10;
	c+=9;
	c=c%10;
	d+=9;
	d=d%10;
	s = b*1000+a*100+d*10+c;
	cout<<s;
	return 0;
}

