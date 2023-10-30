#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cout << "angka terbesar" << endl;

  cout << "masukkan nilai A:"; cin >>a;
  cout << "masukkan nilai B:"; cin >>b;
  cout << "masukkan nilai C:"; cin >>c;

  cout << "angka terbesar adalah:";

  if (a>b && a>c){
    cout << a << endl;
  }
  else if (b>a && b>c){
    cout << b << endl;
  }
   else if (c>a && c>b){
    cout << b << endl;
   }
    return 0;
}
