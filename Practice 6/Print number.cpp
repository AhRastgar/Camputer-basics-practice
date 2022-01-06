#include <iostream>
using namespace std;
int main ()
{
	int firstNum;
	int i;
	int lastchar;
	int j;
	int userinput;
	
	cin>>firstNum;
	
	userinput=firstNum;
	
	for (i=0; userinput>0; i++)
	{
		lastchar=userinput%10;
		userinput=userinput/10;
		
		for (j=0; j<lastchar; j++)
		{
			cout<<lastchar;
		}
		
		cout<<'\n';
	}
	
	return 0;
}