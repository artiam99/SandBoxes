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
		friend void operator+=(marks &,int);
		friend void operator-=(marks &,int);
};
void operator+=(marks &b,int a)
{
	b.mrk+=a;
}
void operator-=(marks &c,int a)
{
	c.mrk-=a;
}
int main() 
{
	marks a(4);
	a.display();
	a+=2;
	a.display();
	a-=3;
	a.display();
    return 0; 
}
