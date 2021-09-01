#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	string name;
	int number;
	map<string,int> phone;//Map is a balanced binary search tree ...searching is fast
	cout<<"Enter 3 sets of phonemaps"<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>name;
		cin>>number;
		phone[name]=number;
	}
	phone["Jarred Letto"]=420;
	
	phone.insert(pair<string,int> ("Leo Capreyo",230));
	int n=phone.size();
	cout<<"Size of map : "<<n<<endl;
	map<string,int>::iterator itr=phone.begin();//In mordern compiler we can use ..auto itr=phone.begin();
	
	for(;itr!=phone.end();itr++)
	cout<<itr->first<<" "<<(*itr).second<<endl;
	
	cout<<endl;
	cout<<"Enter name : "<<endl;
	cin>>name;
	number=phone[name];
	
	cout<<"Number : "<<number<<endl;
	return 0;
}
