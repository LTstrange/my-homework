#include<iostream>
using namespace std;

int main(){
	int num=0;
	cin>>num;
	int max = 0;
	char name = 0;
	int count = 0;
	for (int i=0;i<num;i++){
		char x,y,z;
		int a,b,c,counter=0;
		cin>>x>>a>>b>>y>>z>>c;
		if (a>80&&c>0){
			counter+=8000;
		}
		if (a>85&&b>80){
			counter+=4000;
		}
		if (a>90){
			counter+=2000;
		}
		if (a>85&&z=='Y'){
			counter+=1000;
		}
		if (b>80&&y=='Y'){
			counter+=850;
		}
		if (counter >max){
			max =counter;
			name = x;
		}
		count +=counter;
	}
	cout<<name<<endl<<max<<endl<<count;
}
