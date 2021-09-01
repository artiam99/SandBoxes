#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
template<typename t>//function object
struct doublen
{
	t operator()(t a)
	{
		return a*2;
	}
};
int main()
{
	int x[]={4,5,2,3,1};
	int y[]={6,8,7,9};
	
    //For associative containers : default is less<int>()	
	//set<int,greater<int>()> s;
	//map<int,string,greater<int>()> mp;
	
	sort(x,x+5,greater<int>());
	sort(y,y+4);
	
	for(int i=0;i<5;i++)
	cout<<x[i]<<" ";
	cout<<endl;
	
	for(int i=0;i<4;i++)
	cout<<y[i]<<" ";
	cout<<endl;
	
	int z[9];
	merge(x,x+5,y,y+4,z);
	
	for(int i=0;i<9;i++)
	cout<<z[i]<<" ";
	return 0;
}
