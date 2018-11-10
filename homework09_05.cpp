#include<iostream>
using namespace std;

bool sorted(int a[],int n){
    bool flag=1;
    for (int i=0;i<n-1;i++){
        if (a[i] > a[i+1]){
            flag = 0;
        }
    }
    return flag;
}

void sort(int a[],int n){
    for (int i=0;!(sorted(a,n));i++){
        for (int z=0;z<n-1;z++){
            if (a[z]>a[z+1]){
                int temp=0;
                temp = a[z];
                a[z] = a[z+1];
                a[z+1] = temp;
            }
        }
    }
}

int main(){
    int n=0;
    cout<<"Input n:";
    cin>>n;
    cout<<"Input array of "<<n<<" integers:";
    int x[100]={0};
    for (int i=0;i<n;i++){
        cin>>x[i];
    }
    sort(x,n);
    cout<<"After sorted the array is:";
    for (int i=0;i<n;i++){
        cout<<x[i]<<' ';
    }
    return 0;
}
