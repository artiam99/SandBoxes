#include<iostream>
#include<string>
#include<fstream>//class
using namespace std;
int main()
{
	ifstream file;
	file.open("anil.txt",ios::in);
	if(!file.is_open())
	cout<<"Error";
	else
	{
		cout<<"Inside file\n";
		cout<<file.tellg()<<endl;//returning get position...in case of reading get position always be 0 by default
		file.seekg(5);//modifying get position
		cout<<file.tellg()<<endl;//returning get position
		string s;
		cout<<"Reading from file"<<endl<<endl;//reading from file
		while(file.good())
		{
		    getline(file,s);
		    cout<<s<<endl;
	    }
	    file.close();
	}
	return 0;
}
