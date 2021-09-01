#include<iostream>
#include<cmath>
using namespace std;
template<class t,int size>
class array
{
	t a[size];
	public:
		void display()
		{
			cout<<endl;
			for(int i=0;i<size;i++)
			cout<<a[i]<<endl;
		}
	    void setdata()
	    {
	    	cout<<"Enter data :"<<endl;
	    	for(int i=0;i<size;i++)
	    	cin>>a[i];
		}
};
int main()
{
	array <float,5> a;
	a.setdata();
	a.display();
	return 0;
}
