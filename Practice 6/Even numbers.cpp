#include <iostream>
using namespace std;
int main ()
{
  int x, y, i;
  
   cin>>x;
  
  int Num[x];
  
   for (i=1; i<=x; i++)
  {
    cin>>y;
    
    Num[i]=y;
  }
  
  for (i=1; i<=x; i++)
  {
    if (Num[i]%2==0)
    {
      cout<<Num[i]<<endl;
    }
  } 
  
  return 0;
}