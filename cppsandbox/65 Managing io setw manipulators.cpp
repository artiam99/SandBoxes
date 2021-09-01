#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout.setf(ios::showpoint);
	cout<<setw(5)<<"n"<<setw(15)<<" Inverse of n"<<setw(15)<<"sum of terms"<<endl;//similar to width()
	cout<<setfill('*')<<setw(10)<<12<<endl;
	cout<<setw(20)<<setprecision(6)<<setiosflags(ios::scientific)<<1232.566;
	return 0;
}
