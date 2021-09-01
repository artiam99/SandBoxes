#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char *string1=" C++ ";
	char *string2="Programming";
	int n=strlen(string1);
	int m=strlen(string2);
	for(int i=1;i<m;i++)
	{
		cout.write(string2,i);
		cout<<endl;
	}
	for(int i=m;i>0;i--)
	{
		cout.write(string2,i);
		cout<<endl;
	}
	cout<<"Concatinated string :  ";
	cout.write(string1,n).write(string2,m);//str1 and str2 are concatinated and stored in str1
	cout<<endl;
	cout.write(string1,10);
	return 0;
}
