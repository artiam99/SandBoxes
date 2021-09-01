#include<iostream>
#include<string>
using namespace std;
namespace
{
	int x=10;
    namespace
    {
	    void display()
	    {
		    cout<<x;
     	}
    }
    namespace two
    {
	    int x=100;
    }
}
int main()
{
	display();
	cout<<x<<two::x;
	/*
	using namespace one;
	display();
	*/
	return 0;
}
