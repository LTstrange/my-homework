#include <iostream>
using namespace std;

int main(){
    for (int a=1;a<6;a++)
    for (int b=1;b<6;b++)
    for (int c=1;c<6;c++)
    for (int d=1;d<6;d++)
    for (int e=1;e<6;e++){
        if (a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e){
            if ((((b == 2) + (a == 3))== 1)&& 
				(((b == 2) + (e == 4))== 1)&&
				(((c == 1) + (d == 2))== 1)&&
				(((c == 5) + (d == 3))== 1)&&
				(((a == 1) + (e == 4))== 1)){
                    cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e<<endl;
                }
        }
    }


    return 0;
}

