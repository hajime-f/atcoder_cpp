#include <iostream>
using namespace std;

int main() {
  
  string N;
  cin >> N;

  int sum = 0;
  for (int i = 0; i < N.size(); i ++) {
    int k;
    if (N[i] == '0')  k = 0;
    if (N[i] == '1')  k = 1;
    sum += k * (1 << (N.size() - (i + 1)));
  }
  cout << sum << endl;
  
  return 0;
}
