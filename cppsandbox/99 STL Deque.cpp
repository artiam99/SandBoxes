#include<iostream>
#include<string>
#include<algorithm>
#include<deque>
using namespace std;
int main() 
{
	deque<int> d(5);//we can acces it from both sides
	for(int i=0;i<5;i++)
	d[i]=i+1;
	
	d.push_back(0);
	d.push_front(10);
	
	for(int i=0;i<7;i++)
	cout<<d[i]<<" ";
    return 0;
} 
