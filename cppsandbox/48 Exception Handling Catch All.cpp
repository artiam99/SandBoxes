#include<iostream>
#include<string> 
using namespace std;
void function(int a)
{
	try
	{
		if(a==0)
		throw a;
		else if(a==1)
		throw 'a';
		else if(a==-1)
		throw 1.23;
		else
		cout<<"Exception isn't caught."<<endl<<endl;
    }
	catch(...)// In case of multiple catch statement catch all should always be at the last .otherwise it will catch all type of exception
	{
		"Exception Caught.\n\n";
	}
}
int main() 
{
	int a;
	cout<<"Number of execution:";
	int n;
	cin>>n;
	while(n--){
	cout<<"Enter values of a \n";
	cin>>a;
	function(a);
	}
  return 0; 
}
