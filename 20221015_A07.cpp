#include <iostream>
using namespace std;

int main() {
  int D, N;
  int L[100009], R[100009];
  
  cin >> D >> N;
  for (int i = 1; i <= N; i++)  cin >> L[i] >> R[i];

  int A[100009];
  for (int i = 1; i <= N; i++)  A[i] = 0;
  
  for (int i = 1; i <= N; i++) {
    A[R[i] + 1] -= 1;
    A[L[i]] += 1;
  }

  int sum = 0;
  for (int j = 1; j <= D; j++) {
    sum += A[j];
    cout << sum << endl;
  }
  
  
  return 0;
}
