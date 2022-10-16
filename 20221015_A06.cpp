#include <iostream>
using namespace std;

int main() {
  int N, Q;
  int A[100009];
  int L[100009], R[100009];
  
  cin >> N >> Q;
  for (int i = 1; i <= N; i++)  cin >> A[i];
  for (int i = 1; i <= Q; i++)  cin >> L[i] >> R[i];
  
  int S[100009];
  S[0] = 0;
  for (int i = 1; i <= N; i++) {
    S[i] = S[i - 1] + A[i];
  }

  for (int i = 1; i <= Q; i++) {
    cout << S[R[i]] - S[L[i] - 1] << endl;
  }
  
  return 0;
}
