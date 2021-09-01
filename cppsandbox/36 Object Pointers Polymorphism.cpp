#include<iostream>
#include<string>
using namespace std;
class person
{
	int id;
	float fees;
	public:
		void getdata();
		void display()
		{
			cout<<fees<<endl<<id<<endl<<endl;
		}
};
void person :: getdata()
{
	cin>>id>>fees;
}
int main()
{
	int n;
	cout<<"Number of objects:";
	cin>>n;
	person *p=new person[n];
	person *pi=p;//must as p[i] is not a pointer it's the object itself
	for(int i=0;i<n;i++)
	{
		p[i].getdata();
	}
	for(int i=0;i<n;i++)
	{
		pi->display();
		pi++;
	}
	return 0;
}
