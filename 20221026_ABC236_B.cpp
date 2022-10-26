#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;
  
  int A[400000];
  for (int i = 0; i < 4 * N - 1; i++)  cin >> A[i];
  
  int B[100000];
  for (int i = 0; i < N; i++)  B[i] = 0;

  for (int i = 0; i < 4 * N - 1; i++) {
    B[A[i] - 1] += 1;
  }

  for (int i = 0; i < N; i++) {
    if (B[i] < 4) {
      cout << i + 1 <<endl;
      return 0;
    }
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 0; i < N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A, A + N);  // 昇順ソート
// sort(A, A + N, greater<>());  // 降順ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
