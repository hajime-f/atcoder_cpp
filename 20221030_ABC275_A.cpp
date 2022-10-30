#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  int H[100];
  for (int i = 0; i < N; i++)  cin >> H[i];

  int max_pos = -1;
  int max_value = -1;

  for (int i = 0; i < N; i++) {
    if (max_value < H[i]) {
      max_value = H[i];
      max_pos = i + 1;
    }
  }

  cout << max_pos << endl;
  
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
