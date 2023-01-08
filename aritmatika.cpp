#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 3;

    float hasilTambah;
    float hasilKurang;
    float hasilKali;
    float hasilBagi;

    hasilTambah = a + b;
    cout << a << " + " << b << " = " << hasilTambah << endl;

    hasilKurang = a - b;
    cout << a << " - " << b << " = " << hasilKurang << endl;
    
    hasilKali = a * b;
    cout << a << " x " << b << " = " << hasilKali << endl;

    hasilBagi = a / b;
    cout << a << " : " << b << " = " << hasilBagi << endl;

    cin.get();
    return 0;
}