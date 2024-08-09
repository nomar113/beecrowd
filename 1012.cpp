#include <bits/stdc++.h>
using namespace std;
int main() {
  double A = 0, B = 0, C = 0;
  cin >> A >> B >> C;
  cout << "TRIANGULO: " << fixed << setprecision(3) << A * C / 2.0 << endl;
  cout << "CIRCULO: " << fixed << setprecision(3) << pow(C, 2) * 3.14159 << endl;
  cout << "TRAPEZIO: " << fixed << setprecision(3) << (A + B) * C / 2.0 << endl;
  cout << "QUADRADO: " << fixed << setprecision(3) << pow(B, 2) << endl;
  cout << "RETANGULO: " << fixed << setprecision(3) << A * B << endl;
  return 0;
}
