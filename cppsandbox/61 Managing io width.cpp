#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout.width(5);//makes 5 blocks
	cout<<543;//prints at right most
	cout.width(7);//makes 7 blocks
	cout<<"abc";//prints at right most
	cout<<endl;//new line
	cout.width(10);//makes 10 blocks
	cout<<1.33;//prints at right most
	return 0;
}
