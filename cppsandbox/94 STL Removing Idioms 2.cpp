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
	
	for(vector<int>:: iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";//10 20 30 40 40 60
	
	cout<<endl;
	
	std::remove(v.begin(),v.end(),40);//remove and arranging again
	
	for(vector<int>:: iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";//10 20 30 60_40_60
	
	cout<<endl;
	
	v.erase(std::remove(v.begin(),v.end(),40),v.end());//vector<int>:: iterator i=std::remove(v.begin(),v.end(),40)
	
	for(vector<int>:: iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";//10 20 30 60 60
	
	cout<<endl;
	
	vector<int>:: iterator i=std::remove_if(v.begin(),v.end(),[](int i){
		if(i==60)
		return true;
		return false;
	});
	v.erase(i,v.end());
	
	for(vector<int>:: iterator i=v.begin();i!=v.end();i++)
	cout<<*i<<" ";//10 20 30
	
	return 0;
}
