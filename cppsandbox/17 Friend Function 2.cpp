#include<iostream>
#include<string>
using namespace std;
class footballer;
class cricketer
{
	int age;
	public:
		cricketer(int a)
		{
			age=a;
		}
		friend void display(cricketer,footballer);
};
class footballer
{
	int age;
	public:
		footballer(int a)
		{
			age=a;
		}
		friend void display(cricketer,footballer);
};
void display(cricketer p1,footballer p2)
{
	cout<<p1.age<<endl<<p2.age<<endl;//private members and methods are available if friend
}
int main()
{
	cricketer o1(19);
	footballer o2(20);
	display(o1,o2);
	return 0;
}
