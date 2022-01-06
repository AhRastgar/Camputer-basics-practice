#include <iostream> 
using namespace std;
int main ()
{
  int a, b;

  cin>>a;
  
  b=0;

  for(int i=2; i<a; i++)
  {
    if (a%i==0)
    {
      b=1;
    } 
  }
  
  if (b==0)
  {
    cout<<"yes";
  }
  else
  {
    cout<<"no";
  }
  
  return 0; 
}