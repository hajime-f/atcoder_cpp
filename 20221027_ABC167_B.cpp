#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  int max_value = -1000000000;
  for (int i = 0; i <= A; i++) {
    for (int j = 0; j <= B; j++) {
      int k = K - (i + j);
      int m = 1 * i + 0 * j + (-1) * k;
      if (max_value < m)  max_value = m;
    }
  }
  
  cout << max_value << endl;
  
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
