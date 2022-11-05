#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  vector<int> x(N), y(N);
  for (int i = 0; i < N; i++)  cin >> x[i] >> y[i];

  double a;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      a = (double)(y[i] - y[j]) / (double)(x[i] - x[j]);
      if (-1 <= a && a <= 1)  cnt += 1;
    }
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