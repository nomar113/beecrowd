#include <bits/stdc++.h>
using namespace std;
int main() {
  int itemCode1 = 0, quantityItem1 = 0;
  int itemCode2 = 0, quantityItem2 = 0;
  double price1 = 0, price2 = 0;
  cin >> itemCode1 >> quantityItem1 >> price1;
  cin >> itemCode2 >> quantityItem2 >> price2;
  cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << quantityItem1 * price1 + quantityItem2 * price2 << endl;
  return 0;
}
