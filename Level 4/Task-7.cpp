#include <iostream>
using namespace std;

int main(){
    int n,a,r,cem;
    cin >> n;
    for(int i=1;i<=n;i++){
        a=i; cem=0;
        while(a>0){
            r=a%10;
            cem=cem+r*r*r;
            a=a/10;
        }
        if(cem==i) cout << i << " ";
    }
    return 0;
}