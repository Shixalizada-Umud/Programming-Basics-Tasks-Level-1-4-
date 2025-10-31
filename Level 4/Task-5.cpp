#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
int n,s=0;
cout << "eded daxil edin= " << endl;
cin >> n;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        s=s+1;
    }
}
cout << s << endl;
    return 0;
}