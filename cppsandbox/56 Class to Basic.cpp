#include<iostream>
#include<cmath>
using namespace std;
class vector
{
	public:
		int *a,size;
		vector(int *a=0,int size=0)
		{
			this->a=a;
			this->size=size;
		}
		operator double()//casting operator function
		{
			double sum=0;
			for(int i=0;i<size;i++)
			{
				sum+=a[i]*a[i];
			}
		    return sqrt(sum);
		}
};
int main()
{
	int a[10]={1,2,3,4,5};
	vector v(a,5);
	double d=v;
	cout<<v;
	return 0;
}
