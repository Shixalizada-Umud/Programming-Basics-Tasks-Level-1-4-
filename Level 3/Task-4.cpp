#include <iostream>
using namespace std; 

int main() {
    int a;
    int f=1;
    cout << "ədədi daxil et:" << endl;
    cin>>a;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
        cout << f << endl;
    return 0;
    }