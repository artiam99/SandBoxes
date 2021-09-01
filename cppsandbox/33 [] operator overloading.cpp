#include<iostream> 
using namespace std;
class marks
{
	int mrk[3];
	public:
		marks(int a,int b,int c)
		{
			mrk[0]=a;
			mrk[1]=b;
			mrk[2]=c;
		}
	    int operator[](int a)
		{
			return mrk[a] ;
		}
};
int main() 
{
	marks a(4,5,6);
	cout<<a[2];
    return 0; 
}
