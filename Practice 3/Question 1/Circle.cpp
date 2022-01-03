#include <iostream>
using namespace std;
int main ()
{
	float x;
	
	cout<<"Enter a number for Radius ";
	cin>>x;
	
	if (x>0)
	{
		cout<<"Area= "<<3.14*x*x <<'\n'<<"Environment= " <<2*3.14*x ;
	}
	else
	{
		cout<<"Enter a number more than 0";
	}
		
	return 0;
}