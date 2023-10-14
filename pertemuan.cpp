#include <iostream>
using namespace std;
int main()
{
    int telur = 3;
    bool jagung = false;
    if (jagung)
    {
        telur = 10;
    }
    else
    {
        telur = 3;
    }
    cout << "telur :" << telur << endl;

    // oprator penugasan
    int angka = 20;
    angka *= 2;
    cout << "oprator penugasan :" << angka << endl;

    // post increment
    int angka1 = 20;
    cout << "post increment :" << angka1++ << endl;
    cout << "pre increment :" << ++angka1 << endl;
    cout << "post increment :" << angka1++ << endl;

    // oprator pembanding
    int nilai1 = 2;
    int nilai2 = 4;
    int hasil = nilai1 <= nilai2;
    cout << "oprator pembanding :" << hasil << endl;
}
