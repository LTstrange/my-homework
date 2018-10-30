#include<iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Input n:";
    cin>>n;
    int list[100]={0};
    cout<<endl<<"Input "<<n<<" integers:";
    for (int i=0;i<n;i++){
        cin>>list[i];
    }
    int x=0;
    cout<<endl<<"Input x:";
    cin>>x;
    for (int i=0;i<n;i++){
        if (list[i]==x){
            cout<<endl<<"index = "<<i;
            return 0;
        }
    }
    cout<<endl<<"Not found";
    return 0;
}
