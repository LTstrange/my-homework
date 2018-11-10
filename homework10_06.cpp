#include<iostream>
using namespace std;

void week(int y, int m, int d){
	if (m==1||m==2){
		m += 12;
		y--;
	}
	int iWeek = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
	switch (iWeek){
	case 0: cout << "XINGQI 1"<< endl; break;
	case 1: cout << "XINGQI 2" << endl; break;
	case 2: cout << "XINGQI 3" << endl; break;
	case 3: cout << "XINGQI 4" << endl; break;
	case 4: cout << "XINGQI 5" << endl; break;
	case 5: cout << "XINGQI 6" << endl; break;
	case 6: cout << "XINGQI 7" << endl; break;
	}
}
int main()
{
	int y=0,m=0,d=0;
	cin >>y>>m>>d;
	week(y,m,d);
	return 0;
}

