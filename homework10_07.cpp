#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> a;
    set <int> b;
    set <int> c;
    set <int> d;
    int x=0;
    while(cin>>x){
        if (x==0)break;
        a.insert(x);
    }
    while(cin>>x){
        if (x==0)break;
        b.insert(x);
    }
    for (set<int>::iterator it =a.begin();it != a.end();++it){
        c.insert(*it);
    }
    for (set<int>::iterator it =b.begin();it != b.end();++it){
        c.insert(*it);
    }
    for (set<int>::iterator it=c.begin();it != c.end();++it){
        cout<<*it<<' ';
    }
    cout<<endl;
    for (set<int>::iterator ita =a.begin();ita != a.end();++ita)
    for (set<int>::iterator itb =b.begin();itb != b.end();++itb){
        if (*ita == *itb){
            d.insert(*ita);
        }
    }
    for (set<int>::iterator it=d.begin();it != d.end();++it){
        cout<<*it<<' ';
    }
    return 0;
}

