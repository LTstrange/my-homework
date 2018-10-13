#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	int n;
	cin>>a>>b>>c;
	bool flag=0;
	n=10;
	while(!flag)
	{
		if(n%3==a && n%5==b && n%7==c)
  		{
   			cout<<n<<endl;
   			flag=true;
   			break;
  		}
  		n++;
 	}
 	if(!flag)
 		cout<<"No answer!"<<endl;
 	return 0;
} 
