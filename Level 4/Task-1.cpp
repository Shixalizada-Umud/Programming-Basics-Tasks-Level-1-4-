#include <iostream>
#include <cmath>
using namespace std; 

int main() 
{
int n,s=0;
cout << "eded daxil edin= " << endl;
cin >> n;
for(int i=0;i<=n;i=i+2)
{
    s=s+pow(i,2);
}
    cout <<"cem= "<< s << endl;
    return 0;
}