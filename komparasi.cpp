#include <iostream>

using namespace std;

int main()
{

    int a = 2;
    int b = 2;
    int c = 3;

    bool hasil1, hasil2, hasil3, hasil4;
    //sebanding
    hasil1 = (a == b);
    cout << hasil1 << endl;
    // tidak sebanding
    hasil2 = (a != c);
    cout << hasil2 << endl;
    //  kurang dari
    hasil3 = (a < c);
    cout << hasil3 << endl;
    // lebih dari 
    hasil4 = (a>c);
    cout << hasil4 << endl;
    cin.get();
    
    
    // tugas,  bandingkan angka angka berikut 1, 1, 2, 4, 8, 10
    return 0;
}