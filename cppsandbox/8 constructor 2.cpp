#include<iostream>
#include<string>
using namespace std;
class person
{
	int age;
	string name;
	public:
		person(int x=0,string s="No name")//no error
		{
			cout<<"Constructor is called."<<endl;
			age =x;
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
	p1.getdata();
	return 0;
}
