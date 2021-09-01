#include<iostream>
#include<string>
using namespace std;
class matrix
{
	int **p;
	int m,n;
	public:
		matrix(int x,int y)
		{
			m=x;
			n=y;
			p=new int*[x];
			for(int h=0;h<x;h++)
			p[h]=new int[y];
		}
		void setelement()
		{
			cout<<"enter element"<<endl;
			for(int a=0;a<m;a++)
			{
				for(int b=0;b<n;b++)
				cin>>p[a][b];
			}
		}
		void getelement()
		{ 
		    cout<<"Elements\n";
		    for(int a=0;a<m;a++)
			{
				for(int b=0;b<n;b++)
				cout<<p[a][b]<<" ";
				cout<<endl;
			}
		}
		~matrix()
		{
			cout<<"Memory has been free";
			for(int i=0;i<m;i++)
			delete p[i];
			delete p;
		}
};
int main()
{
	int x,y;
	cout<<"enter row and column :\n";
	cin>>x>>y;
	matrix a(x,y);
	a.setelement();
	a.getelement();
	return 0;
}
