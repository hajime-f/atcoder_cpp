#include <iostream>
using namespace std;

int main() {

  long X;
  int K;
  
  cin >> X >> K;
  
  for (int i = 1; i <= K; i++) {
    double base_number = pow(10, i);
    double Y = X / base_number;
    double Z = round(Y);
    X = Z * base_number;
  }

  cout << X << endl;
  
  return 0;
}
