#include<iostream>
#include<fstream>//class
using namespace std;
int main()
{
	ofstream file;
	file.open("anil.txt");//ios::out|ios::trunc by default
	if(!file.is_open())
	cout<<"Error";
	else
	{
		file<<"Hello Fucker"<<endl<<"Get lost";
		cout<<"Opened successfully";
		file.close();
	}
	return 0;
}
