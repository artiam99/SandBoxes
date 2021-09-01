#include<iostream>
#include<list>
#include<ctime>
#include<cstdlib>
using namespace std;
void display(list<int> l)
{
	cout<<"List :";
	for(list<int>:: iterator itr=l.begin();itr!=l.end();itr++)//In mordern compiler we can use ..for(auto itr:l)...cout<<itr; not *itr
	cout<<*itr<<" ";
	cout<<endl;
}
int main()
{
	srand(time(0));
	list<int> l;
	list<int> m(5);//empty list with 5 spaces
	for(int i=0;i<3;i++)
	l.push_back(rand()%10);
	list<int>::iterator itr=m.begin();
	for(;itr!=m.end();itr++)
	*itr=rand()%10;
	
	cout<<"list 1 : \n";
	display(l);
	cout<<"list 2 : \n";
	display(m);
	
	l.push_front(7);
	m.push_back(5);
	
	list<int> n=l;
	list<int> o=m;
	
	l.merge(m);
	cout<<"Merged : \n";
	display(l);
	
	n.sort();
    o.sort();
	cout<<"Unmerged :\n";
	display(n);
	display(o);
	
	n.merge(o);//also doing sorting
	cout<<"Merged and sorted : \n";
	display(n);
	
	n.reverse();
	cout<<"Reverse : \n";
	display(n);
	
	return 0;
}
