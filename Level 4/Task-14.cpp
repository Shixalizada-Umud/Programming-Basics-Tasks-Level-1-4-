#include <iostream>
using namespace std; 

int main() {
int a,b;
int s=0,r=0;
cout << "ededi daxil et= " ;
cin >> a;
b=a;
while(a>0)
{
    r=a%10;
    s=s*10+r;
    a=a/10;
}
cout << s << endl;
    if(s==b)
    {
        cout << "eded palindrome ededdir" << endl;
    }
    else
    {
        cout << "eded palindrome deyil" << endl;
    }
    return 0;
}