#include<iostream>
#include<cstring>
using namespace std;
class person
{
	int len;
	char *name;
	public:
		void getdata();
		void display()
		{
			cout<<name<<endl<<endl;
		}
};
void person :: getdata()
{
	char *a=new char[30];//****************************************************************
	cin>>a;//******************************************************************************
	len=strlen(a);//***********************************************************************
	name=new char[len];
	strcpy(name,a);//**********************************************************************
}
int main()
{
	int n;
	cout<<"Number of objects:";
	cin>>n;
	person *p=new person[n];
	for(int i=0;i<n;i++)
	{
		p[i].getdata();
	}
	for(int i=0;i<n;i++)
	{
		p[i].display();
	}
	return 0;
}
