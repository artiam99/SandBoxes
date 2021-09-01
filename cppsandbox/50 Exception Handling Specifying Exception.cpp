#include<iostream>
#include<string> 
using namespace std;
void function(int a)
{
	try
	{
		if(a==0)
		throw a;
		else
		cout<<"Exception isn't caught."<<endl<<endl;
    }
	catch(int x)
	{
		cout<<"Exception Caught. "<<x<<"\n\n";
		throw;// rethrowing to outer catch
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
	try
	{
	function(a);
    }
    catch(int x)
    {
    	cout<<"Caught in main.\n\n";
    	
	}
	}
  return 0; 
}
