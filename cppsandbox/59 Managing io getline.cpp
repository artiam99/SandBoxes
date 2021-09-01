#include<iostream>
using namespace std;
int main()
{
	int size=20;
	char s[20];//for string s..getline(cin,s)
	cout<<"Enter New York using cin object and extraction operator\">>\" :\n";
	cin>>s;
	cout<<s;
	cout<<"\nEnter New York using getline :\n";
	cin.getline(s,size);//" York" is still there in the stream...When get line is called it is initialized by it
	cin.getline(s,size);//to modify " York" to "New York"
	cout<<s;//cin.getline(s,20)...20 is max size
	return 0;
}
