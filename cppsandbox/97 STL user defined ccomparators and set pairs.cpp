#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
using namespace std; 
template<typename t>
struct mygr
{
	bool operator()(const t &a,const t &b)
	{
		return a.first<b.first;//returns true or false
	}
};
template<typename t>
struct myls
{
	bool operator()(const t &a,const t &b)
	{
		return a.first>b.first;//returns true or false
	}
};
int main() 
{
	set<pair<int,int>,less<pair<int,int>>()> s1;// Not default
	
	s1.insert({10,20});
	s1.insert({30,40});
	s1.insert({50,60});
	
	for(set<pair>::iterator &i=s1.begin();i!=s1.end();i++)
	cout<<i.first<<" "<<i.second;//10 20 \n 30 40 \n 50 60
	
	cout<<endl;
	
	set<pair<int,int>,greater<pair<int,int>>())> s2;
	
	s2.insert({10,20});
	s2.insert({30,40});
	s2.insert({50,60});
	
	for(set<pair>::iterator &i=s2.begin();i!=s2.end();i++)
	cout<<i.first<<" "<<i.second;//50 60 \n 30 40 \n 10 20
	
	cout<<endl;
	
	set<pair<int,int>,myls<pair<int,int>>())> s3;
	
	s3.insert({10,20});
	s3.insert({30,40});
	s3.insert({50,60});
	
	for(set<pair>::iterator &i=s3.begin();i!=s3.end();i++)
	cout<<i.first<<" "<<i.second;//10 20 \n 30 40 \n 50 60
	
	cout<<endl;
	
	set<pair<int,int>,mygr<pair<int,int>>())> s4;
	
	s4.insert({10,20});
	s4.insert({30,40});
	s4.insert({50,60});
	
	for(set<pair>::iterator &i=s4.begin();i!=s4.end();i++)
	cout<<i.first<<" "<<i.second;//50 60 \n 30 40 \n 10 20
	
	cout<<endl;
	
    return 0;
} 
