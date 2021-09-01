#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int main()
{
	int x[]={4,5,2,3,1};
	int y[]={6,8,7,9};
	
	sort(x,x+5,greater<int>());
	sort(y,y+4);
	
	for(int i=0;i<5;i++)
	cout<<x[i]<<" ";
	cout<<endl;
	
	for(int i=0;i<4;i++)
	cout<<y[i]<<" ";
	cout<<endl;
	
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);
	sort(v.begin(),v.end());
	
	for(vector<int>::iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";
	cout<<endl;
	
	sort(v.begin(),v.end(),greater<int>());
	
	for(vector<int>::iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";
	cout<<endl;
	return 0;
}
