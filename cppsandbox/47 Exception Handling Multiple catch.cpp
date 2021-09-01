#include<iostream>
#include<string> 
using namespace std;
void function(int a) throw(int,double)
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
		cout<<x<<endl<<endl;
	}
	catch(char x)
	{
		cout<<x<<endl<<endl;
	}
	catch(double x)
	{
		cout<<x<<endl<<endl;
	}
	}
  return 0; 
}
