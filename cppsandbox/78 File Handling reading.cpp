#include<iostream>
#include<string>
#include<fstream>//class
using namespace std;
int main()
{
	ifstream file;
	file.open("anil.txt");//ios::out|ios::trunc by default
	if(!file.is_open())
	cout<<"Error";
	else
	{
		string s;
		cout<<"Reading from file"<<endl<<endl;
		while(file.good())//good allows us to check whether any flag such as a goodbit or evoifbit or failbit or badbit is set or not,if set good() will return false
		{
		    getline(file,s);//reading ends when '\n' appears ...
		    cout<<s<<endl;
	    }
	}
	return 0;
}
