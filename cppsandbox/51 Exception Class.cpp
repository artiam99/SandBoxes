#include<iostream>
#include<string>
#include<exception>
using namespace std;
class overspeed : public exception
{
	int speed;
	public:
		const char* what()
		{
			return "Check your speed you are a car not an aeroplane.";
		}
		void getspeed()
		{
			cout<<"Your speed is "<<speed<<endl;
		}
		void setspeed(int speed)
		{
			this->speed=speed;
		}
};
class car
{
    int speed;
	public:
	    car()
	    {
            speed=0;
			cout<<"Speed is: 0"<<endl;		
		}
		void acceleration()
		{
			for(;;)
			{
				speed+=10;
				cout<<"Speed is: "<<speed<<endl;
				if(speed>=250)
				{
					overspeed s;
					s.setspeed(speed);
					throw s;
				}
			}
		}
};
int main() 
{
	car mycar;
    try{
	mycar.acceleration();
    }
    catch(overspeed s)
    {
    	cout<<s.what()<<endl;
    	s.getspeed();
	}
    return 0; 
}
