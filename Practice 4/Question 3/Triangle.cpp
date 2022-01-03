#include <cmath>
#include <iostream>
using namespace std;
int main ()
{
	int a,b,c;
	
	cout<<"Enter 3 number ";
	cin>>a>>b>>c;
	
	if (a<b<c)
	{
		if (c = sqrt(a*a*b*b))
		{
			cout<<a*b/2;
		}
	}
	else if (b<a<c)
	{
		if (c = sqrt(a*a*b*b))
		{
			cout<<a*b/2;
		}
	}
	else if (b<c<a)
	{
		if (a = sqrt(c*c*b*b))
		{
			cout<<c*b/2;
		}
	}
	else if (c<b<a)
	{
		if (a = sqrt(c*c*b*b))
		{
			cout<<c*b/2;
		}
	}
	else if (a<c<b)
	{
		if (b = sqrt(a*a*c*c))
		{
			cout<<a*c/2;
		}
	}
	else if (c<a<b)
	{
		if (b = sqrt(a*a*c*c))
		{
			cout<<a*c/2;
		}
	}
	else
	{
		cout<<a+b+c;
	}
	
	return 0;
}