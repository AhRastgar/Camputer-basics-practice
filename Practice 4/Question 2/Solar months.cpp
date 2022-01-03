#include <iostream>
using namespace std;
int main ()
{
	int x;
	
	cout<<"Enter a mounth number ";
	cin>>x;
	
	if (x>0 && x<7)
	{
		cout<<31;
	}
	else if (x>6 && x<12)
	{
		cout<<30;
	}
	else if (x==12)
	{
		cout<<29;
	}
	else
	{
		cout<<"Eshtebah";
	}
	
	return 0;
}