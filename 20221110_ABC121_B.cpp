#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, M, C;
  cin >> N >> M >> C;

  vector<int> B(M);
  for (int i = 0; i < M; i++)  cin >> B[i];
  
  vector<vector<int>> A(N);
  for (int i = 0; i < N; i++) {
    A[i] = vector<int>(M);
    for (int j = 0; j < M; j++)
      cin >> A[i][j];
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int s = 0;
    for (int j = 0; j < M; j++) {
      s += A[i][j] * B[j];
    }
    s += C;
    if (s > 0)  cnt += 1;
  }

  cout << cnt << endl;
  
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
