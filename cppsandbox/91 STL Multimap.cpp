#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	multimap<int,int> mp;//In multimap updated of data is not allowed ..rather a new data set will be created...
	mp.insert(make_pair(6,18));
	mp.insert(make_pair(4,16));//Subscription operator ( [ ] ) is not allowed
	mp.insert(make_pair(3,12));
	mp.insert(make_pair(4,14));
	mp.insert(make_pair(5,17));
	mp.insert(make_pair(6,19));
	
	for(multimap<int,int>::iterator i=mp.begin();i!=mp.end();i++)
	cout<<i->first<<" "<<i->second<<endl;
	
	cout<<"Enter first : ";
	int n;
	cin>> n;
	for(multimap<int,int>::iterator i=mp.begin();i!=mp.end();i++)
	{
		if(i->first==n)
		cout<<i->second<<endl;
	}
	return 0;
}
