#include<iostream>
#include<cstring>
using namespace std;
class person
{
	public:
		virtual void display()// derived display will be called
		{
			cout<<"Base Display"<<endl;
		}
		void show()
		{
			cout<<"Base Show"<<endl;
		}
};
class student : public person
{
	public:
		void show()
		{
			cout<<"Derived Show"<<endl;
		}
		void display()
		{
		    cout<<"Derivec Display"<<endl;
		}
};
int main()
{
	person *ptr;
	person a;
	student b;
	ptr=&a;
	ptr->display();
	ptr->show();
	cout<<endl;
	ptr=&b;
	ptr->display();
	ptr->show();
	return 0;
}
