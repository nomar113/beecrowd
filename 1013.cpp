#include <bits/stdc++.h>
using namespace std;
int main() {
  int A = 0, B = 0, C = 0;
  cin >> A >> B >> C;
  list<int> integerList;
  integerList.push_back(A);
  integerList.push_back(B);
  integerList.push_back(C);
  integerList.sort();
  integerList.reverse();
  cout << integerList.front() << " eh o maior" << endl;
  return 0;
}
