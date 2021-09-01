#include<iostream>
#include<string>
using namespace std;
class father
{
	public:
		int height;
		void askfather()
		{
			cout<<"I'm your father\n";
		}
};
class mother
{
	public:
		string colour;
		void askmother()
		{
			cout<<"I'm your mother\n";
		}
};
class child:public father,public mother//public father,mother ..mother private inheritance 
{
	public:
		void setdata(string s,int a)
		{
			height=a;
			colour=s;
		}
		void display()
		{
			cout<<height<<endl<<colour<<endl;
		}
};
int main()
{
	child a1;
	a1.askfather();
	a1.askmother();
	a1.setdata("red",11);
	a1.display();
	return 0;
}
