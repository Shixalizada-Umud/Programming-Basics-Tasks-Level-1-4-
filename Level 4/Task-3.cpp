#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
int n,s=0;
cout << "eded daxil edin= " << endl;
cin >> n;
for(int i=2;i<n;i++)
{
s=0;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {    
            s=s+1;
        }
    }
    if(s==0)
    {
    cout << i << endl;
    }
}
    return 0;
}