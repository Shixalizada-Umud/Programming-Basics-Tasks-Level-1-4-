#include <iostream>
using namespace std; 

int main() {
    int bal;
    cout << "Balı daxil et " ;
    cin >> bal;
    if(0<bal && bal<=50) {
        cout<<"F";
        }
    else if(51<=bal && bal<=60){
        cout<<"E" ;
        }
    else if(61<=bal && bal<=70){
        cout << "D" ;
        }
    else if(71<=bal && bal<=80){
        cout << "C" ;
        }
    else if(81<=bal && bal<=90){
        cout << "B" ;
        }
    else{ 
        cout << "A" ;
        }   
    return 0;
}