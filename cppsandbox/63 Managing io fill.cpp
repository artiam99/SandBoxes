#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout.fill('<');// fills the blanks made by width
	cout.precision(3);
	for(int i=1;i<6;i++)
	{
		cout.width(5);
		cout<<i;
		cout.width(10);
		cout<<1/float(i);
		cout<<endl;
		if(i==3)
		cout.fill('>');
	}
	cout.fill('#');
	cout.width(12);
	cout<<12.343;
	return 0;
}
