#include <iostream>

using namespace std;

int main()
{

    char nama[20];
    char ttl[50];
    char matkul[20];
    int nilai;

    cout << "Masukan Nama : ";
    cin >> nama;
    cout << "Masukan Tempat dan Tanggal Lahir :";
    cin >> ttl;
    cout << "Masukan nama mata kuliah :";
    cin >> matkul;
    cout << "Masukan nilai : ";
    cin >> nilai;

    cout << "-----------";

    cout << "Nama : ";
    cout << nama;
    cout << "\n";
    cout << "Tempat dan tanggal lahir : ";
    cout << ttl;
    cout << "\n";
    cout << "Mata kuliah : ";
    cout << matkul;
    cout << "\n";
    cout << "Nilai : ";
    cout << nilai << endl;

    return 0;
}