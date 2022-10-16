#include <iostream>
using namespace std;

int main() {
  int T, N;
  int L[500009], R[500009];
  
  cin >> T >> N;
  for (int i = 1; i <= N; i++)  cin >> L[i] >> R[i];

  int A[500009];
  for (int i = 1; i <= N; i++)  A[i] = 0;
  
  for (int i = 1; i <= N; i++) {
    A[L[i] + 1] += 1;
    A[R[i] + 1] -= 1;
  }

  int sum = 0;
  for (int j = 1; j <= T; j++) {
    sum += A[j];
    cout << sum << endl;
  }
  
  return 0;
}
