#include<iostream>
#include<string>
using namespace std;
class person
{
	int age;
	string name;
	public:
		person(int a,string s)
		{
			age=a;
			name=s;
		}
		friend void display(person);
};
void display(person p1)
{
	cout<<p1.age<<endl<<p1.name<<endl;//private members and methods are available if friend
}
int main()
{
	person p1(19,"Soumyadip Pal"),p2(20,"Sayantan Lahiri");
	display(p1);
	display(p2);
	return 0;
}
