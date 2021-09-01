#include<iostream>
#include<string>
using namespace std;
class person
{
	int id;
	public:
		person(int x=0)
		{
			id=x;
		}
		person(person &i)//copy constructor to initialize an object to another object.
		{
			id=i.id;
		}
		void getdata()
		{
			cout<<id<<endl;
		}
};
int main()
{
	person p1(100);
	person p2(p1);
	person p3=p1;
	person p4;
	p4=p1;
	p1.getdata();
	p2.getdata();
	p3.getdata();
	p4.getdata();
	return 0;
}
