#include <iostream>

using namespace std;

int main()
{
    float Ml[3];
	
	cout<<"Enter 3 number ";
    for (int i = 0; i < 3; ++i)
    {
        cin>>Ml[i];
    }

    for (int i = 1; i < 3; ++i)
    {
        if (Ml[0] < Ml[i])
            Ml[0] = Ml[i];
    }
    cout<<"Greatest number is "<<Ml[0];

    return 0;
}