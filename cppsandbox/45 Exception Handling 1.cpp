#include<iostream>
#include<string> 
using namespace std;
int main() 
{
	int a,b;
	cout<<"Number of execution:";
	int n;
	cin>>n;
	while(n--){
	cout<<"Enter values of a and b\n";
	cin>>a>>b;
	int c=a-b;
	try
	{
		if(c!=0)
		cout<<"a/c "<<a/c<<endl<<endl;
		else
		throw(c);
	}
	catch(int c)
	{
		cout<<"c=0."<<endl<<endl;
	}
    }
  return 0; 
}
