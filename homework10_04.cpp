#include<iostream>
#include<set>
using namespace std;

void Input(int a,int *n){
	for (int i=0;i<a;i++){
		cin>>n[i];
	}
}

bool InThere(int *a,int b){
    for (int i=0;a[i];i++){
        if (a[i]==b){
            return 1;
        }
    }
    return 0;
}

int main(){
	int n1[100]={0};
	int n2[100]={0};
	int a1=0,a2=0;
	cin>>a1;
	Input(a1,n1);
	cin>>a2;
	Input(a2,n2);
	int samelist[100]={0};
	int count=0;
	for (int i=0;i<a1;i++)
    for (int s=0;s<a2;s++){
        if ((n1[i]==n2[s])&&!(InThere(samelist,n1[i]))){
            samelist[count]=n1[i];
            count++;
        }
    }
    count=0;
    for (int i=0;samelist[i];i++){
        cout<<samelist[i]<<' ';
        count++;
    }
    if (count==0){
        cout<<"No Answer";
    }
	return 0;
}

