#include<iostream>
#include<string>
using namespace std;
void display()
{
	static int a=0;
	cout<<++a<<endl;
}
int main()
{
	for(int i=0;i<5;i++)
	display();
	return 0;
}
