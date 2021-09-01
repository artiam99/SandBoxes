#include<iostream>
#include<string>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"A const"<<endl;
		}
		void Back()
		{
			cout<<"I'm Back"<<endl;
		}
};
class B : virtual public A
{
	public:
		B()
		{
			cout<<"B const"<<endl;
		}
};
class C : virtual public A
{
	public:
		C()
		{
			cout<<"C const"<<endl;
		}
};
class D : public B,public C
{
	public:
		D()
		{
			cout<<"D const"<<endl;
		}
};
int main()
{
	D o1;
	o1.Back();
	return 0;
}
