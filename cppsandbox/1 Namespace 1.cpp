#include<iostream>
#include<string>
using namespace std;
namespace one
{
	int x=10;
	void display()
	{
		cout<<x;
	}
}
namespace two
{
	int x=20;
	void display()
	{
		cout<<x;
	}
}
int main()
{
	one::display();
	cout<<two::x;
	/*
	using namespace one;
	display();
	*/
	return 0;
}
