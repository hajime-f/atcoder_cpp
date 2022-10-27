#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, K;
  cin >> N >> K;

  vector<int> d(K);
  vector<vector<int>> A(K);
  for (int i = 0; i < K; i++) {
    cin >> d[i];
    A[i] = vector<int>(d[i]);
    for (int j = 0; j < d[i]; j++)  cin >> A[i][j];
  }
  
  vector<bool> B(N);
  for (int i = 0; i < N; i++)  B[i] = false;
  
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < d[i]; j++) {
      B[A[i][j] - 1] = true;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) 
    if (!B[i])  ans += 1;

  cout << ans << endl;
  
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
