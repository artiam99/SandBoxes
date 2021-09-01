#include<iostream>
#include<string>
#include<fstream>//class
using namespace std;
int main()
{
	fstream file;
	file.open("anil.txt",ios::in|ios::out|ios::app);
	if(!file.is_open())
	cout<<"Error";
	else
	{
		cout<<"Inside file\n";
		cout<<endl;
		file<<endl<<"Run forrest Run";
		file.seekg(0);
		string s;
		cout<<"Reading from file"<<endl<<endl;
		while(file.good())
		{
		    getline(file,s);
		    cout<<s<<endl;
	    }
	    file.close();
	}
	return 0;
}
