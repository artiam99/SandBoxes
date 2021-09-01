#include<iostream>
#include<string>
using namespace std;
class person
{
	int *age;
	string *name;
	public:
		person(int cage,string cname)
		{
			cout<<"Constructor is called"<<endl;
			name=new string;
			age=new int;
			
			*name=cname;
			*age=cage;
		}
		void display()
		{
			cout<<*name<<endl<<*age<<endl;
		}
		~person()
		{
			cout<<"Destructor is called"<<endl;
			delete name;
			delete age;
		}
};
int main()
{
	person *p1=new person(20,"Sayantan Lahiri");
	p1->display();
	delete p1;
	return 0;
}
