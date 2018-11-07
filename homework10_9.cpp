#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int len =str.size();
    for (int i=0,p=len-1;i<p;i++,p--){
        if (str[i]!=str[p]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}

