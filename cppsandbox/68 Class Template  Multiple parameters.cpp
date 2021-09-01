#include<iostream>
#include<cstring>
using namespace std;
template <class t,class t1>
class test
{
	t a;
	t1 b;
	public:
		test(t aa,t1 bb)
		{
			a=aa;
			b=bb;
		}
		void display()
		{
			cout<<a<<endl<<b<<endl<<endl;
		}
};
int main()
{
	test<int,float> a(2,3.4);
	test<float,int> b(3.4,2);
	a.display();
	b.display();
	return 0;
}
