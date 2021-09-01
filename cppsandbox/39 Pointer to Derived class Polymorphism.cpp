#include<iostream>
#include<cstring>
using namespace std;
class person
{
	public:
		int age;
		void display()
		{
			cout<<age<<endl<<endl;
		}
};
class student : public person
{
	public:
		int aage;//if int aage,age; then age in student class will mean its own member
		void display()
		{
		    cout<<aage<<" "<<this->age<<" "<<age<<endl;//example
		}
};
int main()
{
	person *ptr;
	person a;
	student b;
	ptr=&a;
	ptr->age=100;
	ptr->display();
	
	ptr=&b;
	ptr->age=200;//Base class member
	ptr->display();
	
	((student *)ptr)->aage=300;
	((student*)ptr)->display();
	
    student *sptr;
	sptr=&b;
	sptr->aage=400;
	sptr->age=200;
	sptr->display();
	return 0;
}
