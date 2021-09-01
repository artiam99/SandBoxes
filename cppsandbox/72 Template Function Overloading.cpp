#include<iostream>
#include<cmath>
using namespace std;
template<class t1,class t2>
void display(t1 a,t2 b)
{
	cout<<"Template Call "<<a<<" "<<b<<endl;
}
void display(int a,double b)//default double not float
{
	cout<<"Explicit Call "<<a<<" "<<b<<endl;
}
int main()
{
	display("sdff asdfasd",33.42);
	display(23244,34543.44);
	return 0;
}
