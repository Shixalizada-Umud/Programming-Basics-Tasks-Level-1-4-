#include <iostream>
using namespace std;

int main(){
    int n,a,max,min,cem=0;
    cin >> n;
    cin >> a;
    max=a;
    min=a;
    cem=cem+a;
    for(int i=1;i<n;i++){
        cin >> a;
        if(a>max) max=a;
        if(a<min) min=a;
        cem=cem+a;
    }
    cout << max << " " << min << " " << float(cem)/n;
    return 0;
}