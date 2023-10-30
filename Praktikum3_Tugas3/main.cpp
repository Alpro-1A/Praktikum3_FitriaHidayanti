#include <iostream>

using namespace std;

int main()
{
    int kode;
    cout << "1.menghitung luas persegi" << endl;
    cout << "2.menghitung luas persegi panjang" << endl;
    cout << "3.menghitung luas segitiga" << endl;

    cout << "masukkan kode (1/2/3):";cin >> kode;

    switch (kode){
    case 1:{
    double sisi, luas;
    cout << "masukkan panjang sisi :"; cin >> sisi;
    luas = sisi*sisi;
    cout << "luas persegi adalah :" <<luas<<endl;
    break;
    }
    case 2:{
    double panjang, lebar,luas;
    cout << "masukkan nilai panjang :"; cin >> panjang;
    cout << "masukkan nilai lebar :"; cin >> lebar;
    luas = panjang*lebar;
    cout << "luas persegi panjang adalah :" <<luas<<endl;
    break;
    }
    case 3:{
    double alas, tinggi, luas;
    cout << "masukkan alas segitiga :"; cin >> alas;
    cout << "masukkan tinggi segitiga :"; cin >> tinggi;
    luas = alas*tinggi/2;
    cout << "luas segitiga adalah :" <<luas<<endl;
    break;
    }
    }
 return 0;
}
