#include <iostream>
using namespace std; 

int main() {
    int a;
    int s=0;
    int r=0;
    cout << "ədədi daxil et:" << endl;
    cin>>a;
    while(a>0){
    r=a%10;
    s=s+r;
    a=a/10;
    }
    cout << s << endl;
    return 0;
    }