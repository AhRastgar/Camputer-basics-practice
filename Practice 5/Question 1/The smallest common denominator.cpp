#include <iostream>
using namespace std;
int main() 
{
    
    int a, b, x, y, T, KMM;
    cout<<"enter the first number ";
    cin>>a;
    
    cout<<"enter the second number ";
    cin>>b;
    
    x=a;
    y=b;
    
    while (true)
	{
        if(b == 0)
		{
			break;
    	}
    	
       		T=a%b;
        	a=b;
        	b=T;
    }
    
    KMM = (x * y) / a;
    
    cout<<"K.M.M :"<<KMM;
    
    return 0;
}