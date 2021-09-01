#include<iostream> 
using namespace std;
class vector
{
	int x;
	int y;
	int z;
	public:
		vector(int a=0,int b=0,int c=0)
		{
			x=a;
			y=b;
			z=c;
		}
		friend void operator-(vector &);
		void display()
		{
			cout<<x<<endl<<y<<endl<<z<<endl<<endl;
		}
};
void operator-(vector &p)
{
	p.x=-p.x;
	p.y=-p.y;
	p.z=-p.z;
}
int main() 
{
    vector m(12,30,24);
    m.display();
    -m;//m-; error
    m.display();
    return 0; 
}
