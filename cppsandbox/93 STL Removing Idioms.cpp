#include<iostream>
#include<vector>//It is used for sequence containers like vectors , deque etc.
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(40);
	v.push_back(60);
	for(vector<int>::iterator i=v.begin();i!=v.end();i++)//erase removes idioms
	cout<<*i<<" ";
	
	cout<<endl;
	
	v.erase(v.begin()+3,v.begin()+4);//Starting from 0...3-4 will be deleted
	
	for(vector<int>::iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";
	
	cout<<endl;
	
	v.erase(v.begin()+3,v.end()-1);//starting from 0...3 to end()-1 will be deleted
	
	for(vector<int>::iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";
	
	return 0;
}
