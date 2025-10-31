#include <iostream>
using namespace std; 

int main() 
{
int n,s=0;
cout << "daxil edilecek eded sayı= " << endl;
cin >> n;
for(int i=1;i<=n;i++)
{
    int a;
    cout << "eded daxil et= " << endl;
    cin >> a;
    s=s+a;
}
    cout << s << endl;
    return 0;
}