#include<iostream>
using namespace std;

void Input(int a[][30],int n){
	for (int i=0;i<n;i++)
		for (int x=0;x<n;x++)
			cin>>a[i][x];
}

void Output(int a[][30],int n){
	for (int i=0;i<n;i++){
		for (int x=0;x<n;x++){
			cout<<a[i][x]<<' ';
		}
		cout<<endl;
	}
}

void AnDian(int a[][30],int n){
	int max,i,j,col;
	bool flag;
	int count=0;
	for (i=0;i<n;i++){
		max = a[i][0];
		col = 0;
		for (j=0;j<n;j++){
			if (a[i][j]>max){
				max = a[i][j];
				col = j;
			}
		}
		flag =1;
		for (j=0;j<n;j++){
			if (a[j][col]<max){
				flag = 0;
				break;
			}
		}
		if (flag){
			cout<<max<<' ';
			count++;
		}
	}
	if (count==0){
		cout<<"NO";
	}
}

int main(){
	int array[30][30]={0};
	int n=0;
	cin>>n;
	Input(array,n);
	AnDian(array,n);
	return 0;
}
