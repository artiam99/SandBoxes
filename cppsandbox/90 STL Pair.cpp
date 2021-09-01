#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	pair<int,int> p=make_pair(10,20);
	cout<<p.first<<" "<<p.second<<endl<<endl;
	
	map<int,int> mp;
	mp[4]=17;
	mp[3]=12;
	
	mp.insert(pair<int,int>(5,20));
	
	for(map<int,int>::iterator i=mp.begin();i!=mp.end();i++)//Printing in sorted order..coz map is an associative container
	cout<<i->first<<" "<<i->second<<endl;
	cout<<endl<<endl;
	
	mp[4]=15;
	mp.insert(make_pair(6,22));
	mp.insert(make_pair(6,23));//insert is not featured for update
	
	for(map<int,int>::iterator i=mp.begin();i!=mp.end();i++)//Printing in sorted order..coz map is an associative container
	cout<<i->first<<" "<<i->second<<endl;
	cout<<endl<<endl;
	
	int n;
	cout<<endl<<"Enter 3 , 4 or 5 : ";
	cin>>n;
	cout<<mp[n];
	return 0;
}
