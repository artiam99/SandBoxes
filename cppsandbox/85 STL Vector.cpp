#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> v)
{
	cout<<"Vector :";
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<endl;
}
int main()
{
	vector<int> v;
	cout<<"Size :"<<v.size()<<endl;
	cout<<"5 Integers :\n";
	for(int i=0;i<5;i++)
	{
		int x=0;
		cin>>x;
		v.push_back(x);//other insertion operations are not available ..like v[i]=1; as only one side access is available
	}
	cout<<"Size :"<<v.size()<<endl;
	display(v);
	
	vector<int> :: iterator itr = v.begin();//iterator is a nested class in vector class ...in mordern compiler we can use ..auto itr=v.begin();
	cout<<" itr 1 is equal to v.begin()"<<endl;
	itr+=3;//4th position
	v.insert(itr,9);//or v.insert(itr,1,9); 1-> quantity
	
	cout<<"After Inserting :\n";
	display(v);
	
	cout<<"After erase :\n";
	v.erase(itr,v.begin()+ 5);//4th and 5th element removal
	
	display(v);
	
	v.pop_back();
	display(v);
	
	v.clear();
	cout<<"After Clear :\n";
	cout<<"Size :"<<v.size()<<endl;
	if(v.empty())
	cout<<"Empty"<<endl;
	else
	cout<<"Not Empty"<<endl;
	
	v.insert(v.begin(),2);//creation can be done by insert() but only from begining
	display(v);
	return 0;
}
