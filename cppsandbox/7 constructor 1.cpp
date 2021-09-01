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
			cout<<"Constructor is called."<<endl;
			age =0;
			name="No name";
		}
		void setdata(int x,string s)
		{
			age=x;
			name=s;
		}
		void getdata()
		{
			cout<<name<<endl<<age;
		}
};
int main()
{
	person p1;
	p1.setdata(20,"Anil");
	p1.getdata();
	return 0;
}
