// Membuat input dan output yang berisi : nama, tempat tanggal lahir, nama mata kuliah, nilai

#include <iostream>

using namespace std;

int main()
{
    char nama[50], tempat_lahir[50], tanggal_lahir[50], nama_mata_kuliah[50];
    int nilai;
    cout << "Masukan nama : ";
    cin >> nama;
    cout << "Masukan tempat lahir : ";
    cin >> tempat_lahir;    
    cout << "Masukan tanggal lahir : ";
    cin >> tanggal_lahir;
    cout << "Masukan nama mata kuliah : ";
    cin >> nama_mata_kuliah;
    cout << "Masukan nilai : ";
    cin >> nilai;
    
    cout << "Nama:";
    cout << nama << endl;
    cout << "Tempat lahir:" ;
    cout << tempat_lahir << endl;
    cout << "Tanggal lahir:";
    cout << tanggal_lahir << endl;
    cout << "Nama mata kuliah:";
    cout << nama_mata_kuliah << endl;
    cout << "Nilai:";
    cout << nilai << endl;

    return 0;
}