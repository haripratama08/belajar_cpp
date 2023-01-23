#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    bool hasil;

    hasil = !(a == b); // not

    hasil = (a == 2) and (b == 3); // and
    // jika true and true
    cout << hasil << endl;
    hasil = (a == 3) or (b == 4); // or
    // jika false atau false 
    cout << hasil << endl;

    // NOTASI SIMPLIFIKASI

    hasil = (a == 2) && (b == 3); // and
    // jika true and true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 4); // or
    // jika false atau false 
    cout << hasil << endl;
    cin.get();

    // TUGAS membuat code untuk
    
    // 1. Jika true and true
    // 2. Jika false and false
    // 3. Jika true and false
    // 4. Jika false and true

    // 5. Jika true or true
    // 6. Jika false or false
    // 7. Jika true or false
    // 8. Jika false or true
    
    // 9. Jika true nand true
    // 10. Jika false nand false
    // 11. Jika true nand false
    // 12. Jika false nand true

    // 13. Jika true nor true
    // 14. Jika false nor false
    // 15. Jika true nor false
    // 16. Jika false nor true
    
    
    return 0;
}