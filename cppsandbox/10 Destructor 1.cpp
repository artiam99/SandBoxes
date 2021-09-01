#include<iostream>
#include<string>
using namespace std;
int count=0;
class person
{
	public:
		person()
		{
			cout<<"Constructor is called"<<++count<<endl;
		}
		~person()
		{
			cout<<"Destructor is called"<<count--<<endl;
		}
};
int main()
{
	person *p1=new person;
	person *p2=new person;
	delete p2;
	return 0;
}
