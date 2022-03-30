#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int NumberOfRows;
	int a[3];
  	int d;
  	
  	cin>>NumberOfRows;
  	
  	for (int i=0; i<NumberOfRows; i++)
  	{
  		cin>>a[0];
  		cin>>a[1];
  		cin>>a[2];
	}
  	
  	d = fabs (a[0] + a[2] - ( 2 * a[1]));

  	int min = d;
  	
  	if(min > 0)
  	{
    	for(int i = 0; i<3; i++)
    	{
    		for(int j = 0; j<3; j++)
    		{
        		if(i == j)
        		{
        			continue;
        		}
          
        		int newA[3][2];
        		newA[0] = a[0];
        		newA[1] = a[1];
        		newA[2] = a[2];
        
        		newA[i] = a[i] + 1;
        		newA[j] = a[j] - 1;
        
        
        		int newD = newA[0][2] + newA[2][2] - ( 2 * newA[1][2]);
        
        		if(newD < min)
        		{
        			min = newD;
        		}
    		}
    	}
  	}
  
  	cout<<min;
  
	return 0;
}