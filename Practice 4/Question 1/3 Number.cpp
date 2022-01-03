#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	
	cout<<"Enter 3 number ";
	cin>>a>>b>>c;
	
	if (c==0)
	{
		cout<<a+b;
	}
	else if (c<0)
	{
		cout<<a-b;
	}
	else if (c>0)
	{
		cout<<a*b;
	}
	else
	{
		cout<<"Erorr";
	}
	
	return 0;
}