#include <iostream>

using namespace std;


int main() {
    int n;
    int m;
    int k;
    int count;

    cout << "enter first number: ";
    cin >> n;
    cout << "enter second number: ";
    cin >> m;
    bool istrue = false;

    do {
    cout << "select action";
    cout << "1.Toplam -- 2.Çıkartma -- 3.Çarpma -- 4.Bölme" << endl;
    cin >> k;

    switch (k) {
        case 1:
            count = n + m;
            cout << count << endl;
            istrue = true;
            break;
        case 2:
            count = n - m;
            cout << count << endl;
            istrue = true;
            break;
        case 3:
            count = n * m;
            cout << count << endl;
            istrue = true;
            break;
        case 4:
            count = n / m;
            cout << count << endl;
            istrue = true;
            break;
        case 5:
            istrue = true;
            cout << "Exit" << endl;
            break;

        default:
            cout << "Please enter a valid transaction" << endl;
    }


     } while (!istrue);



    return 0;
}