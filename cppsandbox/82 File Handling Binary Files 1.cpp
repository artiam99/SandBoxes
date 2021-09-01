//The main difference between binary files and txt files is how they handle the new lines
//In unix os a line is ended by a carriage return(13) followed by a line feed(10)
//in advanced os it is changed by LF or CR not both
//when c++ compiler writes something in a text file it changes the cr and lf depending on the os type
//in case of binary files c++ library won't change the form
//for binary files we will use get and put for reading and writing respectively
//Binary files are use in case of the situation when we don't want to write something in a human readable format ..it will be written in 1s and 0s
#include<iostream>
#include<cstring>
#include<fstream>//class
using namespace std;
int main()
{
	char input[100];
	strcpy(input,"Anil is a mfucker\n");
	fstream file;
	file.open("anil.bin",ios::binary|ios::out|ios::in|ios::trunc);//mandatory
	if(!file.is_open())
	cout<<"Error";
	else
	{
		cout<<"Inside file\n";
		cout<<"Writing in the file"<<endl;
		
		int ln=strlen(input);
		for(int i=0;i<ln;i++)
		file.put(input[i]);
		
		cout<<"Reading from file"<<endl<<endl;//reading from file
	    file.seekg(0);
		while(file.good())
		{
		    char c;
		    file.get(c);
		    cout<<c;
	    }
	    file.close();
	}
	return 0;
}
