#include<iostream>
#include<cstring>
#include<vector>
//#include"filename.type" or #include<filename> if already specified to the compiler
using namespace std;
#define one 1
//#define Abs(number) {(number<0)?-(number):number}//function like macroes
typedef vector<int> intv;
#define Windows 1
#define Linux 2
#define Mac 3

#define OS Mac
int main()
{
	intv v;
	//code with integer vector v
	cout<<one<<endl;
	
	//cout<<Abs(-3)<<" "<<Abs(3)<<endl;
	
	//available macros #if,#endif,#elif,#else
	#if OS==Windows
	cout<<"Windows"<<endl;//will be compile
	#elif OS==Mac
	cout<<"Mac"<<endl;
	#else
	cout<<" Not OS"<<endl;
	#endif//#if should be ended with #endif
	cout<<"Always here"<<endl;
	
	#ifdef Mac//if there is a macro or not
	cout<<"Mac is here"<<endl;
	#else
	cout<<"Mac is not here"<<endl;
	#endif
	
	#ifdef Dos
	cout<<"Dos is here"<<endl;
	#else
	cout<<"Dos is not here"<<endl;
	#endif
	
	#undef Mac
	#ifdef Mac
	cout<<"Mac is here"<<endl;
	#else
	cout<<"Mac is not here"<<endl;
	#endif
	
	cout<<__LINE__<<endl;
	cout<<__FILE__<<endl;
	cout<<__DATE__<<endl;
	cout<<__TIME__<<endl;
	return 0;
}
