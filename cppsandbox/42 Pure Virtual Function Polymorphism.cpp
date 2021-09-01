#include<iostream>
#include<string>
using namespace std;
class media
{
	public:
		float price;
		string name;
		virtual void display()=0;//Abstract base class,pure virtual function,base class objects cannot be made
};
class book : public media
{
	public:
		int page;
		void display()
		{
		    cout<<page<<endl<<price<<endl<<name<<endl;
		}
};
class tape : public media
{
	public:
		float time;
		void display()
		{
		    cout<<time<<endl<<price<<endl<<name<<endl;
		}
};
int main()
{
	book a;
	tape b;
	media *ptr[2]={&a,&b};
	cout<<"Enter book details:(page price name)\n";
	cin>>a.page>>a.price;
	getline(cin,a.name);
	cout<<"Enter tape details:(time price name)\n";
	cin>>b.time>>b.price;
	getline(cin,b.name);
	ptr[0]->display();
	ptr[1]->display();
	return 0;
}
