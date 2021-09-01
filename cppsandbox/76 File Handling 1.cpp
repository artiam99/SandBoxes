#include<iostream>
#include<fstream>//class
using namespace std;
int main()
{
	fstream file;
	//file.open("anil.txt"); creating file if doesn't exist ..open in both reading and writing mode
	//i.e. file.open("anil.txt",ios::in | ios::out); by default
	
	//if ifstream file; file.open("anil.txt")   mode is reading mode by default  i.e. ios::in
	
	//if ofstream file; file.open("anil.txt")   mode is writhing and truncation mode by default  
	//i.e. ios::out & ios::trunc...trunk means deleting contents and making brand new file if it exists..otherwise only creating and opening
	
	// in ios::out mode we can use ios::app (append mode) it won't delete the previous contents
	
	// ios::ate will make a seek occur at the end of the file
	
	//ios::binary is used to specify binary files
	
	// fstream file ; if file doesn't exist then ios::trunc should be included otherwise no file will be  opened
	//i.e. file.open("anil.txt",ios::trunc);
	
	file.open("anil.txt",ios::in|ios::out|ios::trunc);//must
	if(!file.is_open())
	cout<<"Error";
	else
	{
	    cout<<"Opened Successfully";
	    file.close();
    }
	return 0;
}
