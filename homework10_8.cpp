#include<iostream>
#include<string>
using namespace std;

int main(){
    string pwd;
    cin>>pwd;
    int len = pwd.size();
    if (len>=8&&len<16){
            bool a=0,b=0,c=0,d=0;
        for (int i=0;i<len;i++){
            if (pwd[i]<=90||pwd[i]>=65) a=1;
            if (pwd[i]<=122||pwd[i]>=97) b=1;
            if (pwd[i]<=57||pwd[i]>=48) c=1;
            if (pwd[i]==33||pwd[i]==64||
                pwd[i]==126||pwd[i]==35||
                pwd[i]==36||pwd[i]==37||
                pwd[i]==94) d=1;
        }
        if (a+b+c+d>3){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}


