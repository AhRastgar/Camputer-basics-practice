#include <iostream>
using namespace std;
int main ()
{
	int x, k, y, z;
	cout<<"Enter 2 number ";
	cin>>x>>k;

	for (int i=x; x>0; i++)
	{
		z=x%10;
		y=y*10+z;
		x=x/10;
	}
	if (k==y)
	{
		cout<<"Yes";
	}
	
	else 
	{
		cout<<"No";
	}
	
	return 0;
}