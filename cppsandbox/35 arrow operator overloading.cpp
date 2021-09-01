#include<iostream>
#include<string>
using namespace std;
class person
{
	char name[20];
	int id;
	public:
		void getdata();
		void display()
		{
			cout<<name<<endl<<id<<endl;
		}
		person *operator->()
		{
			return this;
		}
};
void person :: getdata()
{
	gets(name);//not cin>>name; in case of sentense including " ".
	cin>>id;
}
int main()
{
	person p1;
	p1.getdata();
	p1.display();
	p1->display();
	return 0;
}
