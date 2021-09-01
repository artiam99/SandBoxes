#include<iostream>
#include<string>
using namespace std;
class person
{
	protected:
	int age;
	string name;
	public:
	void setdata(string iname,int iage)
	{
		name=iname;
		age=iage;
	}
};
class student:private person
{
    int id;
    public:
    person::setdata;//Betriyal
	void setid(int iid)
    {
       id=iid;	
    }
	void display()
	{
		cout<<name<<endl<<age<<endl<<id<<endl;
	}
};
int main()
{
	student s1;
	s1.setdata("Ram",11);
	s1.setid(112);
	s1.display();
	return 0;
}
