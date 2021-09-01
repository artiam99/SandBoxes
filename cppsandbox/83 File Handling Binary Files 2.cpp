//Reading and writing of memor blocks to binary files
//reading and writing of object to binary files

//istream &read(char *buf,streamsize num)
//ostream &write(const *buf,streamsize num)

#include<iostream>
#include<cstring>
#include<fstream>//class
using namespace std;
class person
{
	int age;
	char name[20];
	public:
		person(int age=0,char *name=NULL)
		{
			this->age=age;
			strcpy(this->name,name);
		}
		void display()
		{
			cout<<name<<endl<<age<<endl;
		}
		
};
int main()
{
	person p1(12,"Rock");
	fstream file("person.bin",ios::binary|ios::in|ios::out|ios::trunc);
	if(!file.is_open())
	cout<<"Error";
	else
	{
		file.write((char *)&p1,sizeof(person));
		file.seekg(0);//we want to read from begining
		person p2(13,"Sandra");
		file.read((char*)&p2,sizeof(person));
		p1.display();
		p2.display();
	}
	return 0;
}
