#include <iostream>
using namespace std;
int main()
{
    int n, sum, t;
    
    cout<<"Enter a number ";
    cin>>n;
	sum=0;
	
    while (n!=0)
	{
        t=n%10;
    	sum=sum+t;
    	n=n/10 ;
    }
    
    cout << sum << endl;
    
	return 0;
}