#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input n(n must be a natural number less than 10000):";
    cin>>n;
    if (n>10000||n<=0){
        cout<<endl<<n<<" is out of range of valid values.";
        }
    else{
        int s=0;
        for (int i=2;i<=n;i++) s=(s+3)%i;
        cout<<endl<<"Last No. is:"<<s+1;
        }

}



