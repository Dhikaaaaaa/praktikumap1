#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int a, b, c;
  int max;

  cout << "masukkan bilangan:";
  cin >> a >> b >> c;

  if (a >= b && a >= c) {
    max = a;
  } else if (b >= a && b >= c) {
    max = b;
  } else {
    max = c;
  }
  cout << "bilangan yang paling maksimal adalah : " << max << endl;
  return 0;
}