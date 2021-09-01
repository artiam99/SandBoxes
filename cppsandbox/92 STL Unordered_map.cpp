#include<iostream>
//#include<unordered_map>
#include<string>
using namespace std;
int main()
{
	unordered_map<int,int> mp;//unordered map is basically a hash table...search is very fast
	mp[4]=300;
	mp[3]=400;
	mp.insert(make_pair(4,400));
	mp.insert(make_pair(10,700));
	mp.insert(make_pair(5,600));
	mp.insert(make_pair(5,500));
	mp.insert(make_pair(4,700));
	mp.insert(make_pair(3,200));
	mp[10]=200;
	for(unordered_map<int,int>::iterartor i=0;i!=mp.begin();i++)//print will be done random for different runs
	cout<<i->first<<" "<<i->second<<endl;
	return 0;
}
