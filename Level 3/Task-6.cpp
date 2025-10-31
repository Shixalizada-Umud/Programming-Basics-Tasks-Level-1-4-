#include <iostream>
using namespace std; 

int main() {
    int a;
    int s=0;
    cout << "ədədi daxil et:" << endl;
    cin>>a;
    for(int i=1;i<a;i++){
        s=s+i;
    }
    cout << s << endl;
    return 0;
    }