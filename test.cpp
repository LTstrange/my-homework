#include<iostream>
using namespace std;

int main(){
	int array[2][2]={4,1,5,3,};
	int (*p)[2] = array;
	for (int i=0;i<4;i++)
	{
		cout<<**p<<' ';
		p++;
	}

	return 0;
}
