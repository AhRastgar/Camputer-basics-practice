#include <iostream>
using namespace std;
int main ()
{
	float x, n, m, t1, t2;
	
	cin>>n>>m>>t1>>t2;
	
	x=t2*1000;
	
	if (n*t1<=m*x)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
	return 0;
}