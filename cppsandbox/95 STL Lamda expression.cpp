#include <bits/stdc++.h> 
#include<vector>
using namespace std;
template<typename t>
struct doublen//function object to double numbers
{
	t operator()(t a)
	{
		return a*2;
	}
};
int main() 
{
	doublen<int> dn;
	int d=dn(2);
	cout<<d<<endl;//print 4
	
	
	auto lmd=[](int n){ return n*2;};
	int c=lmd(2);
	cout<<c<<endl;
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	for_each(v.begin(),v.end(),[](int n){
		cout<<n*n<<endl;
	});
    return 0;
} 
