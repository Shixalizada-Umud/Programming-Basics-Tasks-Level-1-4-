#include <iostream>
using namespace std; 

int main() {
int a;
int n=0;
cout << "ededi daxil et:" << endl;
cin >> a;
for(int i=2;i<a;i++){
    if(a%i==0){
        n=n+1;
    }
}
if(n==0){
    cout << "eded sadedir" << endl;
}
else{
    cout << "eded murekkebdir" << endl;
}
    return 0;
    }