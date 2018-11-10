#include<iostream>
using namespace std;

int main(){
	for (int i =1;i<=1000;i++){
		int str[10]={0};
		int index=0;
		for (int j=1;j<i;j++){
			if (!(i%j)){
				str[index]=j;
				index++;
			}
		}
		int sum=0;
		for (int x=0;x<index;x++){
			sum+=str[x];
		}
		if (sum == i){
			cout<<i<<" its factors are ";
			for (int y =0;y<index;y++){
				if (y != 0){
					cout<<',';
				}
				cout<<str[y];
			}
			cout<<'.'<<endl;
		}
	}
	return 0;
}

