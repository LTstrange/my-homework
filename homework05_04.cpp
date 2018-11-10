#include<iostream>
using namespace std;

int main()
{
	int y,m;
	cin>>y>>m;
	if ((y>=1900&&y<3000)&&(m>0&&m<13))
	{
		if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			cout<<31;
		else if (m!=2)
			cout<<30;
		else
		{
			if ((!(y%4)&&(y%100))||!(y%400))
				cout<<29;
			else
				cout<<28;
		}
	}
	else
		cout<<"Input error!";
	return 0;
}
