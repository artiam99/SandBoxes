#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		int y;
		void getage();
		void setage(int x)
		{
			y=x;
		}
};
void person :: getage()
{
	cout<<y;
}
int main()
{
	person p1;
	int x;
	cin>>x;
	p1.setage(x);
	p1.getage();
	return 0;
}
