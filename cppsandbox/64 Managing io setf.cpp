#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout.fill('*');
	cout.setf(ios::showpos);
	cout.setf(ios::showpoint);
	cout.setf(ios::left,ios::adjustfield);
	cout.width(10);
	cout<<"Value"<<endl;
	cout.setf(ios::internal,ios::adjustfield);
	cout.width(10);
	cout.precision(4);
	cout<<12.2354<<endl;
	cout.setf(ios::right,ios::adjustfield);
	cout.width(10);
	cout<<12;
	cout<<endl;
	cout.setf(ios::scientific,ios::floatfield);
	cout.width(10);
	cout<<123.334;
	cout.unsetf(ios::showpos);//unset the flags
	return 0;
}
