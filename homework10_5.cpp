#include<iostream>
using namespace std;

void output(int *l,int a){
    for (int i=0;i<a;i++){
        if (i==0){
            if ((l[i]<l[i+1])||(l[i]>l[i+1])){
                cout<<i<<' ';
            }
        }
        else if (i==a-1){
            if ((l[i]<l[i-1])||(l[i]>l[i-1])){
                cout<<i<<' ';
            }
        }
        else {
            if (((l[i]<l[i+1])&&(l[i]<l[i-1]))||
                ((l[i]>l[i+1])&&(l[i]>l[i-1])))
                cout<<i<<' ';
        }
    }
    cout<<endl;
}

int main(){
    int n=0;
    cin>>n;
    for (int i=0;i<n;i++){
        int x=0;
        cin>>x;
        int list[80]={0};
        for (int s=0;s<x;s++){
            cin>>list[s];
        }
        output(list,x);
    }
    return 0;
}

