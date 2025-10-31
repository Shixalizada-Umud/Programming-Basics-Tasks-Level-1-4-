#include <iostream>
using namespace std; 

int main() 
{
int a,max=0;
cout << "ededi daxil et="<<endl;
cin >> a;
max=a;
while(a!=0)
{
    cin >> a;
    if(a>max)
    {
        max=a;
    }    
}
cout << max << endl;
return 0;
}