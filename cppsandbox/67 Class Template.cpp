#include<iostream>
#include<cstring>
using namespace std;
const int s=3;//s is changing for an unknown reason
template <class t>
class vector
{
	t *a;
	public:
		vector(int m)
		{
			a=new t[s];
			for(int i=0;i<m;i++)
			a[i]=0;
		}
		vector(t *b)
		{
			a=b;
		}
		t operator*(vector &b)
		{
			t sum=0;
			for(int i=0;i<s;i++)
			
			{
			sum+=this->a[i] * b.a[i];
			}return sum;
		}
};
int main()
{
	vector <float> a(3);
	vector <float> b(3);
	float x[3]={1.1,2.2,3.3};
	float y[3]={4.4,5.5,6.6};
	a=x;
	b=y;
	float s=a*b;
	cout<<s;
	return 0;
}
