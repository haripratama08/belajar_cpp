#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    int c = 2;

    float hasilTambah;
    float hasilKurang;
    float hasilKali;
    float hasilBagi;

    hasilTambah = a + b + c;
    cout << a << " + " << b << " + " << c << " = " << hasilTambah << endl;

    hasilKurang = a - b - c;
    cout << a << " - " << b << " - " << c << " = " << hasilKurang << endl;
    
    hasilKali = a * b * c;
    cout << a << " x " << b << " x " << c << " = " << hasilKali << endl;

    hasilBagi = a / b / c;
    cout << a << " : " << b << " : " << c << " = " << hasilBagi << endl;

    cin.get();
    
    
    // TUGAS 
    // MEMBUAT TAMBAH,  KURANG,  KALI,  BAGI UNTUK 3 DATA (10, 5, 2)
    return 0;
}