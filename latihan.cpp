#include <iostream>
using namespace std;
int main()
{
    float nilai, uts, uas, quis, tugas, project, rata_rata;
    cout << "masukan nilai uts : ";
    cin >> uts;
    cout << "masukan nilai uas :";
    cin >> uas;
    cout << "masukan nilai quis :";
    cin >> quis;
    cout << "masukan nilai tugas :";
    cin >> tugas;
    cout << "masukan nilai project :";
    cin >> project;

    rata_rata = (uts + uas + quis + tugas + project) / 5;
    cout << "nilai rata-rata :" << rata_rata << endl;

    if (rata_rata >= 91)
    {
        cout << "nilai A+" << endl;
    }
    else if (rata_rata >= 81)
    {
        cout << "nilai A" << endl;
    }
    else if (rata_rata >= 71)
    {
        cout << "nilai B+" << endl;
    }
    else if (rata_rata >= 51)
    {
        cout << "nilai B" << endl;
    }
    else if (rata_rata >= 41)
    {
        cout << "nilai C" << endl;
    }
    else if (rata_rata >= 31)
    {
        cout << "nilai D" << endl;
    }
    else if (rata_rata >= 0)
    {
        cout << "nilai E" << endl;
    }
}
