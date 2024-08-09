#include <bits/stdc++.h>
using namespace std;
int main() {
  int employeeNumber = 0, hours = 0;
  double hourValue = 0;
  cin >> employeeNumber >> hours >> hourValue;
  cout << "NUMBER = " << employeeNumber << endl;
  cout << "SALARY = U$ "<< fixed << setprecision(2) << hours * hourValue << endl;
  return 0;
}
