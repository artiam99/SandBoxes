#include<iostream>
#include<string>
using namespace std;
class person
{
	int age;
	string name;
	public:
		person()
		{
			cout<<"Default constructor is called."<<endl;
			age =0;
			name="No name";
		}
		person(int x)
		{
			cout<<"Int constructor is called."<<endl;
			age=x;
			name="No name";
		}
		person(string s)
		{
			cout<<"String constructor is called."<<endl;
			age=0;
			name=s;
		}
		person(int x,string s)
		{
			cout<<"Both constructor is called."<<endl;
			age=x;
			name=s;
		}
		void getdata()
		{
			cout<<name<<endl<<age<<endl<<endl;
		}
};
int main()
{
	person p1,p2(20),p3("Anil"),p4(20,"Ravi");
	p1.getdata();
	p2.getdata();
	p3.getdata();
	p4.getdata();
	return 0;
}
