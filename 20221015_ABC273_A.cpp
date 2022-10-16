#include <iostream>
using namespace std;

int main() {

  int N;
  int f[19];
  
  cin >> N;
  
  f[0] = 1;
  for (int i = 1; i <= N; i++)
    f[i] = i * f[i - 1];
  
  cout << f[N] << endl;
  return 0;
}
