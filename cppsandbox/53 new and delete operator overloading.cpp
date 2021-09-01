#include<iostream>
#include<string>
#include<stdexcept>
#include<cstdlib>
using namespace std;
class student
{
	int age;
	string name;
	public:
		student(int age,string name)
		{
			this->age=age;
			this->name=name;
		}
		void display()
		{
			cout<<age<<" "<<name<<endl;
		}
		void *operator new(size_t size)
		{
		    void* ptr;
		    cout<<"New is Overloaded"<<endl;
		    ptr=malloc(size);
		    if(!ptr)
		    {
		    	bad_alloc ba;
		    	throw ba;
			}
			return ptr;
		}
		void operator delete(void *ptr)
		{
			cout<<"Delete is Overloaded"<<endl;
			free(ptr);
		}
};
int main() 
{
	student *me;
	try
	{
		me=new student(24,"Anil");
		me->display();
		delete me;
	}
	catch(bad_alloc b)
	{
		cout<<b.what()<<endl;
	}
    return 0; 
}
