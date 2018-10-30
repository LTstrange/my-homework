#include<iostream>
using namespace std;

int main()
{
	int num=0,sum;
	int reverse(int num);
	while(cin>>num)
	{ 
		sum=reverse(num);
		cout<<sum<<endl;
	}
}
int reverse(int num)
{	 int sum=0;
	   if(0<num&&num<100)
    { int a=num/10;
      int b=num-a*10;
      sum=10*b+a;
	} 
		if(100<=num&&num<1000)
	{ int a=num/100;
	  int b=num%100/10;
	  int c=num%10;
	  sum=c*100+b*10+a;
	}
	 if(-100<num&&num<0)
    { int a=-num/10;
      int b=-num-a*10;
      sum=-(10*b+a);
	}
	if(-1000<num&&num<=-100)
	{ int a=-num/100;
	  int b=-num%100/10;
	  int c=-num-a*100-b*10;
	  sum=-(c*100+b*10+a);
	}
	if(num==0)
	{sum=0;
	}
	  
	return sum;
}

