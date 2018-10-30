#include<iostream>
using namespace std;

void print(int a,int b,int c){
	cout<<a<<'*'<<a<<" + "<<b<<'*'<<b<<" = "<<c<<'*'<<c<<endl;
} 

int pow(int x){
	return x*x;
}

void fun(int x,int y){
	for (int a=x;a<=y;a++){
		for (int b=x;b<=y;b++){
			for (int c=x;c<=y;c++){
				if (a<b&&(pow(a)+pow(b)==pow(c))){
					print(a,b,c);
				}
			}
		}
	}
}

int main(){
	int x=1,y=100;
	fun(x,y);
	return 0;
}
