#include <cmath>
#include <iostream>
using namespace std;
int main() {
  float a, b, c;
  cout << "Digite o peso: " << endl;
  cin >> a;
  cout << "Digita a altura: " << endl;
  cin >> b;
  c = a / (b * b);
  if (c < 16.9) {
    cout << "Magreza extrema: " << c << endl;
  } else {
    if (c <= 18.5) {
      cout << "Magreza: " << c << endl;
    } else {
      if (c < 25) {
        cout << "Peso Normal: " << c << endl;
      } else {
        if (c < 30) {
          cout << "Sobrepeso: " << c << endl;
        } else {
          if (c < 35) {
            cout << "Obesidade 1: " << c << endl;
          } else {
            if (c < 40) {
              cout << "Obesidade 2: " << c << endl;
            } else {
              cout << "Obesidade 2: " << c << endl;
            }
          }
        }
      }
    }
  }
  return 0;
}
