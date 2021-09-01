#include<iostream>
#include<cmath>
using namespace std;
template<class t>
void roots(t a,t b,t c)
{
	float d=b*b-4*a*c;
	if(d==0)
	cout<<"Roots are : "<<-b/(2*a)<<" and "<<-b/(2*a)<<endl;
	else if(d>0)
	cout<<"Roots are : "<<(-b+sqrt(d))/(2*a)<<" and "<<(-b-sqrt(d))/(2*a)<<endl;
	else
	cout<<"Roots are : "<<-b/(2*a)<<" + i "<<sqrt(-d)/(2*a)<<" and "<<-b/(2*a)<<" - i "<<sqrt(-d)/(2*a)<<endl;
}
int main()
{
	cout<<"Integer roots : "<<endl;
	roots(1,-5,6);
	cout<<"Float roots :"<<endl;
	roots(1.5,3.6,5.0);
	return 0;
}
