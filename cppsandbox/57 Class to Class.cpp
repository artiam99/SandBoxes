#include<iostream>
#include<cmath>
using namespace std;
class class1
{
	public:
	int code;
	float price;
	int item;
		class1(int a=0,float b=0,int c=0)
		{
			code=a;
			price=b;
			item=c;
		}
		void display()
		{
			cout<<"code :"<<code<<endl<<"price :"<<price<<endl<<"item :"<<item<<endl<<endl;
		}
		operator float()
		{
			float a=item*price;
			return a;
		}
		/*operator class2()//using sourse class coversion operator function,destination class should be completed first
		{
			class2 temp;
			temp.code=code;
			temp.value=item*price;
		    return temp;
		}*/
};
class class2//destinatio
{
	public:
	int code;
	float value;
		class2(int code=0,float value=0)
		{
			this->code=code;
			this->value=value;
		}
		class2(class1 a)//using destination class constructor
		{
			code=a.code;
			value=a.price*a.item;
		}
		void display()
		{
			cout<<"code :"<<code<<endl<<"value :"<<value<<endl;
		}
};
int main()
{
	class1 a(12,12.1,13);
	a.display();
	float d=a;
	cout<<"Total value :"<<d<<endl<<endl;
	class2 b=a;
	b.display();
	return 0;
}
