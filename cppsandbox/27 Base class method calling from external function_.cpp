#include<iostream>
#include<string>
using namespace std;
class person
{
	int x;
	public:
		person(int p=0)
	    {
		    x=p;
    	}
		void introduce()
		{
			cout<<"I'm Person "<<x<<endl;
		}
};
class student:public person
{
	int p;
    public:
    	student(int x=0)
    	{
    		p=x;
		}
	void introduce()
	{
		cout<<"I'm Student"<<p<<endl;
	}
};
void extfun(person &pp)
{
	pp.introduce();
};
int main()
{
	student s(12);
	s.introduce();
	extfun(s);
	return 0;
}
