#include<iostream>
#include<string>
using namespace std;
class person
{
	int age;
	string name;
	public:
		person()
		{
			age=0;
			name="No name";
		}
		friend ostream &operator <<(ostream &,person &);//Insertion
		friend istream &operator >>(istream &,person &);//extraction
		
};
ostream &operator<<(ostream &output,person &p)
{
    output<<"What the fuck"<<endl;
	output<<"My name is "<<p.name<<"\nMy age is "<<p.age<<endl;
	return output;
}
istream &operator>>(istream &input,person &p)
{
	input>>p.name>>p.age;
	return input;
}
int main() 
{
	person me;
	cout<<"Enter name and age:\n";
	cin>>me;
	cout<<me;
    return 0; 
}
