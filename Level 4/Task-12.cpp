#include <iostream>
using namespace std; 

int main() {
int a,s=0;
cout << "eded daxil edin" << endl;
cin >> a;
for(int i=1;i<=a;i++)
{
    if(a%i==0)
    {
    s=s+i;
    }
}
if(s==a)
{
cout << "eded mükəmməl ədəddir" << endl;
}
else
{
cout << "eded mükəmməl ədəd deyil" << endl;
}
    return 0;
    }