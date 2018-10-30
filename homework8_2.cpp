#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a,b,c=0;
	bool flag=1;
	char ch=0;
	while (flag){
		int name=0;
		cin>>a>>b>>ch;
		if (a==0&&b==0){
			break;
		}
		if (ch == '+'){
			name = 1;
		}
		else if (ch =='-'){
			name = 2;
		}
		else if (ch == '*'){
			name = 3;
		}
		else if (ch == '/'){
			name = 4;
		}
		else if (ch == '%'){
			name = 5;
		}
		else
			cout<<"Error"<<endl;
		switch (name){
			case 0:flag =0;break;
			case 1:c = a+b;break;
			case 2:c = a-b;break;
			case 3:c = a*b;break;
			case 4:c = a/b;break;
			case 5:c = a%b;break;
		}
		if (flag == 0){
			flag = 1;
			continue;
		}
		cout<<c<<endl;
	} 
}
