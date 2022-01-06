#include <iostream>
using namespace std;
int main ()
{
	int t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12;
	int r, s, b, k;
	
	cin>>t1>>t2>>t3;
	cin>>t4>>t5>>t6;
	cin>>t7>>t8>>t9;
	cin>>t10>>t11>>t12;
	
	r=t1+t2+t3;
	s=t4+t5+t6;
	b=t7+t8+t9;
	k=t10+t11+t12;
	
	if (r>s && r>b && r>k)
	{
		cout<<"rahman";
	}
	else if (s>r && s>b && s>k)
	{
		cout<<"siroos";
	}
	else if (b>r && b>s && b>k)
	{
		cout<<"bijan";
	}
	else if (k>r && k>s && k>b)
	{
		cout<<"keyvan";
	}
	
	return 0;
}