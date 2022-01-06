#include <iostream>
using namespace std;
int main ()
{
  int x, y, i, min, max;
  
  cin>>x;
  
  int Num[x];
  
  for (i=0; i<x; i++)
  {
    cin>>y;
    
    Num[i]=y;
  }
  
  min=Num[0];
  max=Num[0];
  
  for (i=0; i<x; i++)
  {
    if (Num[i]<min)
    {
      min=Num[i];
    }

    if (Num[i]>max)
    {
      max=Num[i];
    }
  }
  
  cout<<min<<endl;
  cout<<max;
  
  return 0;
}