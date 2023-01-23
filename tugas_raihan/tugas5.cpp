#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int b = 1;

    bool hasil;

    hasil = !(a == b); // not

    cout << "and" << endl;
    hasil = (a == 1) and (b == 1); 
    cout << hasil << endl;
    hasil = (a == 0) and (b == 0); 
    cout << hasil << endl;
    hasil = (a == 1) and (b == 0); 
    cout << hasil << endl;
    hasil = (a == 0) and (b == 1); 
    cout << hasil << endl;
    cout << "" << endl;

    cout << "or" << endl;
    hasil = (a == 1) or (b == 1); 
    cout << hasil << endl;
    hasil = (a == 0) or (b == 0); 
    cout << hasil << endl;
    hasil = (a == 1) or (b == 0); 
    cout << hasil << endl;
    hasil = (a == 0) or (b == 1); 
    cout << hasil << endl;
    cout << "" << endl;

    cout << "nand" << endl;
    hasil = !((a == 1) and (b == 1)); 
    cout << hasil << endl;
    hasil = !((a == 0) and (b == 0)); 
    cout << hasil << endl;
    hasil = !((a == 1) and (b == 0)); 
    cout << hasil << endl;
    hasil = !((a == 0) and (b == 1)); 
    cout << hasil << endl;
    cout << "" << endl;

    cout << "nor" << endl;
    hasil = !((a == 1) or (b == 1)); 
    cout << hasil << endl;
    hasil = !((a == 0) or (b == 0)); 
    cout << hasil << endl;
    hasil = !((a == 1) or (b == 0)); 
    cout << hasil << endl;
    hasil = !((a == 0) or (b == 1)); 
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