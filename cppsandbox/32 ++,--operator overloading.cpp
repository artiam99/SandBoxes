#include<iostream> 
using namespace std;
class marks
{
	int mrk;
	public:
		marks(int a)
		{
			mrk=a;
		}
		void display()
		{
			cout<<mrk<<endl;
		}
	    marks operator++(int a=0)
		{
			mrk++;
			return *this;
		}
		marks operator--(int a=0)
		{
			mrk--;
			return *this;
		}
};
int main() 
{
	marks a(4);
	a.display();
	(a++).display();
	(a--).display();
    return 0; 
}
