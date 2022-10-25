#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, M;
  cin >> N >> M;

  int A[100], sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    sum += A[i];
  }

  sort(A, A + N, greater<>());

  int m = 0;
  int threshold = sum / (4 * M);
  for (int i = 0; i < N; i++) {
    if (A[i] >= threshold)  m += 1;
  }
  if (M <= m)  cout << "Yes" << endl;
  else  cout << "No" << endl;
  
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
