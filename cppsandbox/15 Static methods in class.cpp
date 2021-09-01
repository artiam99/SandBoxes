#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		static int men;//can't assign here
		person()
		{
			++men;
		}
		static void display()
		{
			cout<<"Display "<<men<<endl;
		}
};
int person::men=0;//must declear outside
int main()
{
	cout<<person::men<<endl;
	person p1,p2,p3,p4;
	person::display();//static method
	cout<<person::men<<endl;
	return 0;
}
