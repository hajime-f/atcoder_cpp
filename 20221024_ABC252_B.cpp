#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, K;
  cin >> N >> K;

  int A[100], C[100];
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    C[i] = A[i];
  }
  
  int B[100];
  for (int j = 0; j < K; j++)  cin >> B[j];
  
  sort(C, C + N);
  int max_value = C[N - 1];
  
  for (int i = 0; i < N; i++) {
    if (A[i] != max_value)  continue;
    for (int j = 0; j < K; j++) {
      if (B[j] == i) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
