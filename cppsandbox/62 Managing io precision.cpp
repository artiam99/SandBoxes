#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout.precision(4);//if precision(n), then at most n digits can be there before ddecimal point.
	cout.width(5);
	cout<<1.2344244224;//precision 4== 1,.,2,3--> 4 numbers for four precision
	return 0;
}
