#include<iostream>
#include<string>
using namespace std;
class person
{
	protected:
	int age;
	public:
	person(int iage)
	{
		age=iage;
	}
};
class student:private person
{
    public:
	student(int x):person(x)//base doesn't have a default constructor
    {
       cout<<"Base class constructor is calles\n";
    }
	void display()
	{
		cout<<age<<endl;
	}
};
int main()
{
	student s1(23);
	s1.display();
	return 0;
}
