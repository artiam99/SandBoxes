#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
	person()
	{
		cout<<"Main Constructor is called"<<endl;
	}
	~person()
	{
		cout<<"Main Destructor is called"<<endl;
	}
};
class student:private person
{
	public:
	student()
	{
		cout<<"Derived Constructor is called"<<endl;
	}
	~student()
	{
		cout<<"Derived Destructor is called"<<endl;
	}
};
int main()
{
	person *p=new person;
	delete p;
	student s;
	return 0;
}
