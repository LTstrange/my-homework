#include<iostream>
#include<iomanip>
using namespace std;



int main(){
	int n=0;
	cin>>n;
	int triangle[20][20]={1};
	for (int i=0;i<n+1;i++){
		for (int s=0;s<n-i;s++){
			cout<<"  ";
		}
		for (int s=0;s<i+1;s++){
			cout<<setw(4)<<triangle[i][s];
		}
		triangle[i+1][0]=1;
		for (int s=0;triangle[i][s];s++){
			triangle[i+1][s+1]=triangle[i][s]+triangle[i][s+1];
		}
		cout<<endl;
	}
	return 0;
}
