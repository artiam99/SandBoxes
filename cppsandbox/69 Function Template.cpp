#include<iostream>
#include<iomanip>
using namespace std;
template<class t>
void swap(t &a,t &b)
{
	t temp=a;
	a=b;
	b=temp;
}
template<class t>
bool max(t a,t b)
{
	if(a>b)
	return true;
	return false;
}
template<class t1>
void bubble(t1 a[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(max(a[j],a[j+1]))
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main()
{
	int a[]={5,4,3,2,1};
	float b[]={5.5,4.4,3.3,2.2,1.1};
	bubble(a,5);
	bubble(b,5);
	for(int i=0;i<5;i++)
	{
		cout<<"a :"<<a[i]<<"  b : "<<b<<endl;
	}
	return 0;
}
