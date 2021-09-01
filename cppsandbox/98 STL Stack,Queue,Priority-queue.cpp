#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
int main() 
{
	stack<int> cstk;//by default stack<int,deque<int>> is used ..we can also use stack<int,vector<int>> or stack<int,list<int>>
	cstk.push(100);
	cstk.push(200);
	cstk.push(300);
	cout<<"Stack(LIFO) :";
	while(!cstk.empty())
	{
		cout<<cstk.top()<<" ";
		cstk.pop();
	}
	
	cout<<endl<<endl;
	
	queue<int> cque;//vector can't be used ..as it doesn't support fornt access..we can use list or deque as underline data structure.
	cque.push(100);
	cque.push(200);
	cque.push(300);
	
	cout<<"Queue :"<<endl;
	while(!cque.empty())
	{
		cout<<"Front : "<<cque.front()<<" Back : "<<cque.back()<<endl;
		cque.pop();
	}
	cout<<endl;
	priority_queue<int> cpque;
	cpque.push(300);
	cpque.push(100);
	cpque.push(200);
	
	cout<<"Priority Queue : ";
	while(!cpque.empty())
	{
		cout<<cpque.top()<<" ";//300 200 100
		cpque.pop();
	}
	/*priority_queue<int,std::less<int>> cpque;
	cpque.push(300);
	cpque.push(100);
	cpque.push(200);
	
	cout<<"Priority Queue : ";
	while(!cpque.empty())
	{
		cout<<cpque.top()<<" ";
		cpque.pop();
	}*/
    return 0;
} 
