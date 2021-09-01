#include<iostream>
#include<string>
#include<fstream>//class
using namespace std;
int main()
{
	fstream file;
	file.open("anil.txt",ios::out|ios::in|ios::trunc);
	if(!file.is_open())
	cout<<"Error";
	else
	{
		cout<<"Inside file\n";
		cout<<file.tellp()<<"  "<<file.tellg()<<endl;//returning put position...returns 0 as there is truncation position by default
		file<<"Anil is a fucker"<<endl;
		string s;
		cout<<"Reading from file"<<endl<<endl;//reading from file
		file.seekg(0);
		while(file.good())
		{
		    getline(file,s);
		    cout<<s<<endl;
	    }
	    file.seekg(0);
	    file.seekp(5);//modifying put position
	    cout<<file.tellp()<<" "<<file.tellg()<<endl;//returning put position..i.e. end position
		file<<"is a goodboy"<<endl;
		while(file.good())
		{
		    getline(file,s);
		    cout<<s<<endl;
	    }
	    file.close();
	}
	return 0;
}
