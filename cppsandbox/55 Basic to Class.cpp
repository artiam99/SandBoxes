#include<iostream>
using namespace std;
class time
{
	public:
		int h,m;
		time(int t=0)//basic to class by constructor
		{
			h=t/60;
			m=t%60;
		}
		void display()
		{
			cout<<h<<" : "<<m<<endl;
		}
};
int main()
{
	time d;
	int a=80;
	d=a;
	d.display();
	return 0;
}
