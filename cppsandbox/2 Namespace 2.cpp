#include<iostream>
#include<string>
using namespace std;
namespace one
{
	int x=10;
    namespace two
    {
	    int x=20;
	    void display()
	    {
		    cout<<x;
     	}
    }
}
int main()
{
	one::two::display();
	cout<<one::x;
	/*
	using namespace one;
	display();
	*/
	return 0;
}
