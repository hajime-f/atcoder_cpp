#include <iostream>
using namespace std;

int N;

int main() {
  cin >> N;
  
  for (int i = 9; i >= 0; i--) {
    int w = 1 << i;
    cout << (N / w) % 2;
  }
  cout << endl;
  
  return 0;
}
