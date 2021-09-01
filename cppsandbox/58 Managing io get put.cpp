#include<iostream>
using namespace std;
int main()
{
	char c;
	int count=0;
	cout<<"Enter input"<<endl;
	cin.get(c);//inckudung " " \n \t......tap enter at first insertion abd see
	while(c!='\n')
	{
		cout<<c<<endl;
		count++;
		cin.get(c);
	}
	cout<<"Number of characters: "<<count;
	return 0;
}
