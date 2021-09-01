#include<iostream>
#include<cstring>
using namespace std;
class str
{
	char *p;
	int len;
	public:
		str()
		{
			len=0;
			p=0;
		}
		str(const char *s)
		{
			len=strlen(s);
			p=new char[len+1];
			strcpy(p,s);
		}
		str(const str &s)
		{
			len=s.len;
			p=new char[len+1];
			strcpy(p,s.p);
		}
		~str()
		{
			delete p;
		}
		friend str operator+(const str &s,const str &t);
		friend bool operator<=(const str &s,const str &t);
		friend void show(const str s);
};
str operator+(const str &s,const str &t)
{
	str temp;
	temp.len=s.len+t.len;
	temp.p=new char[temp.len+1];
	strcpy(temp.p,s.p);
	strcat(temp.p,t.p);
	return temp;
}
bool operator<=(const str &s,const str &t)
{
	int m=strlen(s.p);
	int n=strlen(t.p);
	if(m<=n)
	return true;
	else
	return false;
}
void show(const str s)
{
	cout<<s.p;
}
int main() 
{
	str s1="New";
	str s2="York";
	str s3="Delhi";
	str t1,t2,t3;
	t1=s1;
	t2=s2;
	t3=s1+" "+s3;
	cout<<"t1\n";
	show(t1);
	cout<<"\nt2\n";
	show(t2);
	cout<<"\nt3\n";
	show(t3);
	cout<<endl;
	if(t1<=t3)
	{
	    show(t1);
		cout<<" is smaller than ";
		show(t3);	
	}
	else
	{
	    show(t3);
		cout<<" is smaller than ";
		show(t1);
	}
    return 0; 
}
