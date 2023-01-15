#include <iostream>

using namespace std;

int main()
{

    int a = 1;
    int b = 1;
    int c = 2;
    int d = 4;
    int e = 8;
    int f = 10;

    // a b
    bool hasil1, hasil2, hasil3, hasil4;
    //sebanding
    hasil1 = (a == b);
    cout << hasil1 << endl;
    // tidak sebanding
    hasil2 = (a != b);
    cout << hasil2 << endl;
    //  kurang dari
    hasil3 = (a < b);
    cout << hasil3 << endl;
    // lebih dari 
    hasil4 = (a > b);
    cout << hasil4 << endl;
    
    // b c
    bool hasil5, hasil6, hasil7, hasil8;
    //sebanding
    hasil5 = (b == c);
    cout << hasil5 << endl;
    // tidak sebanding
    hasil6 = (b != c);
    cout << hasil6 << endl;
    //  kurang dari
    hasil7 = (b < c);
    cout << hasil7 << endl;
    // lebih dari 
    hasil8 = (b > c);
    cout << hasil8 << endl;

    // c d
    bool hasil9, hasil10, hasil11, hasil12;
    //sebanding
    hasil9 = (c == d);
    cout << hasil9 << endl;
    // tidak sebanding
    hasil10 = (c != d);
    cout << hasil10 << endl;
    //  kurang dari
    hasil11 = (c < d);
    cout << hasil11 << endl;
    // lebih dari 
    hasil12 = (c > d);
    cout << hasil12 << endl;

    // d e
    bool hasil13, hasil14, hasil15, hasil16;
    //sebanding
    hasil13 = (d == e);
    cout << hasil13 << endl;
    // tidak sebanding
    hasil14 = (d != e);
    cout << hasil14 << endl;
    //  kurang dari
    hasil15 = (d < e);
    cout << hasil15 << endl;
    // lebih dari 
    hasil16 = (d > e);
    cout << hasil16 << endl;

    // e f
    bool hasil17, hasil18, hasil19, hasil20;
    //sebanding
    hasil17 = (e == f);
    cout << hasil17 << endl;
    // tidak sebanding
    hasil18 = (e != f);
    cout << hasil18 << endl;
    //  kurang dari
    hasil19 = (e < f);
    cout << hasil19 << endl;
    // lebih dari 
    hasil20 = (e > f);
    cout << hasil20 << endl;
    cin.get();

    // tugas,  bandingkan angka angka berikut 1, 1, 2, 4, 8, 10
    return 0;
}