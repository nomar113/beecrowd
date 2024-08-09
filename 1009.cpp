#include <bits/stdc++.h>
using namespace std;
int main() {
  string employeeName = "";
  double fixedSalary = 0, ordersValue = 0;
  cin >> employeeName >> fixedSalary >> ordersValue;
  cout << "TOTAL = R$ " << fixed << setprecision(2) << fixedSalary + ordersValue * 0.15 << endl;
  return 0;
}
