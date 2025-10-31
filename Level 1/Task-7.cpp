#include <iostream>
#include <cmath>
using namespace std; 

int main() {
double a;
double b;
cout << "a=";
cin >> a ;
cout << "b=";
cin >> b ;
a=a+b;
b=a-b;
a=a-b;
cout << "a="<<a<<endl<<"b="<<b;
return 0;
}