#include <iostream>

using namespace std;

int main(){
    int a = 2;
    int b = 3;
    
    bool hasil;
    
    hasil = !(a == b); // not
    
    hasil = (a == 2) and (b == 3); // and
    cout << hasil << endl;
    hasil = (a == 3) or (b == 4 ); // or
    cout << hasil << endl;
    
    //SIMPLIFIKASI
    
    hasil = (a == 2) && (b == 3); // and
    cout << hasil << endl;
    hasil = (a == 3) || (b == 4 ); // or
    cout << hasil << endl;
    cin.get();
    
    return 0;
}