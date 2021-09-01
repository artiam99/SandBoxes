#include<iostream>
#include<string>
#include<algorithm>
#include<forward_list>
using namespace std;
int main() 
{
	forward_list<int> fl(5);//we can acces it only from front sides...when back access is not needed it's used
	
	d.push_front(1);//initialization with subscription operator is not allowed as only one side access is available
	d.push_front(2);
	d.push_front(3);
	d.push_front(4);
	
	for(int i=0;i<4;i++)
	cout<<fl[i]<<" ";
    return 0;
} 
