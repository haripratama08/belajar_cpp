#include <iostream>

// cara simplifikasi std::

using namespace std;

int main(){
    int a = 1;
    long b = 5;
    //INT
    cout << a << endl;
    // Melakukan print thd nilai a
    cout <<  sizeof(a)  <<  "byte" << endl;
    // Jumlah byte dari nilai a
    cout <<  numeric_limits<int>::max() << endl;
    // Maksimal nilai yang bisa didefinisikan oleh int
    cout <<  numeric_limits<int>::min() << endl;
    // Minimal nilai yang bisa didefinisikan oleh int

    //LONG
    cout << b << endl;
    // Melakukan print thd nilai b
    cout <<  sizeof(b)  <<  "byte" << endl;
    // Jumlah byte dari nilai b
    cout <<  numeric_limits<long>::max() << endl;
    // Maksimal nilai yang bisa didefinisikan oleh long
    cout <<  numeric_limits<long>::min() << endl;
    // Minimal nilai yang bisa didefinisikan oleh long
    cin.get();
    // Melakukan cin
    return 0;



    //TUGAS
    // Cari tahu berapa batas maksimal dari tipe data berikut : int, long, short, float, double dengan contoh coding diatas.
}