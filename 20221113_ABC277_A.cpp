#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, X;
  cin >> N >> X;

  vector<int> P(N);
  for (int i = 0; i < N; i++)  cin >> P[i];

  int i;
  for (i = 0; i < N; i++) {
    if (P[i] == X)
      break;
  }

  cout << i + 1 << endl;
  
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
