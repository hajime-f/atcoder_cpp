#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int H, W;
  cin >> H >> W;

  int min_value = 101;
  vector<vector<int>> A(H);
  
  for (int i = 0; i < H; i++) {
    A[i] = vector<int>(W);
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
      if (min_value >= A[i][j])  min_value = A[i][j];
    }
  }
  
  int ans = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      ans += A[i][j] - min_value;
    }
  }

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
