#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  int A[2000];

  cin >> N;
  for (int i = 0; i < N; i++)  cin >> A[i];
  sort(A, A + N);

  bool B[2001];
  for (int i = 0; i < 2001; i++)  B[i] = false;
  
  for (int i = 0; i < N; i++) {
    B[A[i]] = true;
  }

  int ans = 0;
  for (int i = 0; i < 2001; i++) {
    if (!B[i])  break;
    ans += 1;
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
