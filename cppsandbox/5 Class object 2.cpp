#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		string name;
		void introduce();
};
void person :: introduce()
{
	cout<<name<<endl;
}
int main()
{
	person p1,*ptr1;
	p1.name="Sayantan";
	ptr1=new person();
	ptr1->name="Soumyadip Pal";
	p1.introduce();
	(*ptr1).introduce();
	delete ptr1;
	return 0;
}
