#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;
  
  vector<int> A(N);
  for (int i = 0; i < N; i++)  cin >> A[i];

  vector<int> B(N);
  for (int i = 0; i < N; i++)  cin >> B[i];
  
  vector<int> C(N - 1);
  for (int i = 0; i < N - 1; i++)  cin >> C[i];
  
  int total = 0;

  for (int i = 0; i < N; i++) {
    total += B[A[i] - 1];
    if (A[i] - A[i - 1] == 1) {
      total += C[A[i - 1] - 1];
    }
  }

  cout << total << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 0; i < N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A, A + N);  // 昇順ソート
// sort(A, A + N, greater<>());  // 降順ソート

// vector<int> vec(N);  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
