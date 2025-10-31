#include <iostream>
using namespace std; 

int main() {
int a=0;
int s=0;
for(int i=1;s<1000;i=i+a){
    s=s+a+i;
    a=i+a;
    cout << i << endl;
    cout << a << endl;
}
    return 0;
    }