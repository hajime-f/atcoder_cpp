#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, S, D;
  cin >> N >> S >> D;

  int X[100], Y[100];
  for (int i = 0; i < N; i++)  cin >> X[i] >> Y[i];

  for (int i = 0; i< N; i++) {
    if (X[i] < S && Y[i] > D) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  
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
