#include<iostream> 
using namespace std;
class complex
{
	int a;
	int b;
	public:
		complex(int x=0,int y=0)
		{
			a=x;
			b=y;
		}
		void display()
		{
			if(b<0)
			{
				cout<<a<<" - i "<<-b<<endl<<endl;
				return;
			}
			cout<<a<<" + i "<<b<<endl<<endl;
		}
		complex operator+(complex);
		complex operator-(complex c)
		{
			complex t;
			t.a=a-c.a;
			t.b=b-c.b;
			return t;
		}
};
complex complex::operator+(complex a)
{
	complex b;
	b.a=this->a+a.a;
	b.b=this->b+a.b;
    return b;
}
int main() 
{
	complex a(1,4),b(2,5);
	a.display();
	b.display();
	complex c=a+b;
	complex d=a-b;
	c.display();
	d.display();
    return 0; 
}
