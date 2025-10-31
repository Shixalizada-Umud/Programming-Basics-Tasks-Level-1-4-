#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
for(int i=100;i<1000;i++)
{
    if(i%10+i/10%10+i/100==10)
    {
        cout << i << endl;
    }
}
    return 0;
}