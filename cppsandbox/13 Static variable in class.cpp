#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		static int x;//can't assign here
};
int person::x=20;//must declear outside
int main()
{
	cout<<person::x<<endl;//20
	person::x=100;
	cout<<person::x<<endl;//100
	person p;
	p.x=30;
	cout<<p.x<<endl;//30
	cout<<person::x;//30
	return 0;
}
