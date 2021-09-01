#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>
using namespace std;  
int main() 
{
	map<int,string> mp;
	set<int> s;//set is an associative container which contains only one value of same data type at a time.
	multiset<int> ms;//set with multiple similar values
	
	s.insert(10);
	s.insert(40);
	s.insert(20);
	s.insert(30);
	
	ms.insert(10);
	ms.insert(40);
	ms.insert(40);
	ms.insert(30);
	
	for(set<int>::iterator i=s.begin();i!=s.end();i++)
	cout<<*i<<" ";
	
	cout<<endl;
	
	for(set<int>::iterator i=ms.begin();i!=ms.end();i++)
	cout<<*i<<" ";
	
	ms.erase(std::remove(ms.begin(),ms.end(),40),ms.end());//removing idioms
	
	cout<<endl;
	
	for(set<int>::iterator i=ms.begin();i!=ms.end();i++)
	cout<<*i<<" ";
	
    return 0;
} 
