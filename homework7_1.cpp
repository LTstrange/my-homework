#include<iostream>
using namespace std;
int main()
{
  int n,a1,a2,b1,b2,m=0;
  //cout<<"1000-2000之间满足条件的数有:"<<endl;
  for(n=1000;n<2000;n++)
  {
    a1=n/1000;
    a2=(n-a1*1000)/100;
    b1=n%100/10;
    b2=n%10;
    if(a1+a2==b1+b2)
    {
      m++;
      cout<<n<<" ";
    }
  }
  cout<<endl;
  //cout<<endl<<"一共有"<<m<<"个"<<endl;
  cout<<m;
  return 0;
} 
	 
  	

