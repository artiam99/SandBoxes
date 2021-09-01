#include<iostream>
#include<cstring>
using namespace std;
class person
{
	int age;
	char name[20];
	public:
		person(char*,int );
		person & greater(person &);
		void display()
		{
			cout<<name<<endl<<age<<endl<<endl;
		}
};
person::person(char *s,int a)
{
	age=a;
	strcpy(name,s);
}
person & person::greater(person &a)
{
	if(a.age>= age)
	return a;
	else
	return *this;
}
int main()
{
	person p("Ravi",22),q("Ron",32),r("Harry",23);
	person pi=p.greater(q);
	person po=p.greater(r);
	pi.display();
	po.display();
	return 0;
}
