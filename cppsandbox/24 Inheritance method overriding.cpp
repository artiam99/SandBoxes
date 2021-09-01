#include<iostream>
#include<string>
using namespace std;
class person
{
	public:
		void introduce()
		{
			cout<<"I'm Person\n";
		}
};
class student:public person
{
    public:
	void introduce()
	{
		cout<<"I'm Student"<<endl;
	}
};
int main()
{
	student s;
	s.introduce();
	s.person::introduce();
	return 0;
}
