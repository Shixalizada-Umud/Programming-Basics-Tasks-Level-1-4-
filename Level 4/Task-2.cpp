#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
int n,s=0;
cout << "eded daxil edin= " << endl;
cin >> n;
while(n>0)
{
    n=n/10;
    s=s+1;
}
    cout <<"reqemlerinin sayi"<< s << endl;
    return 0;
}