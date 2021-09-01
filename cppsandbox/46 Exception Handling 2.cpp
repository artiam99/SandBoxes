#include<iostream>
#include<string> 
using namespace std;
void function(int a,int b,int c)
{
		if((a-b)!=0)
		cout<<"Result "<<(float)c/(a-b)<<endl<<endl;
		else
		throw(a-b);
}
int main() 
{
	int a,b,c;
	cout<<"Number of execution:";
	int n;
	cin>>n;
	while(n--){
	cout<<"Enter values of a ,b and c\n";
	cin>>a>>b>>c;
	try
	{
	function(a,b,c);
    }
    catch(int x)
	{
		cout<<"Exception caught."<<endl<<endl;
	}
	}
  return 0; 
}
