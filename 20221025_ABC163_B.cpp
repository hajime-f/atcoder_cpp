#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, M;
  cin >> N >> M;

  int A[10000], sum = 0;
  for (int i = 0; i < M; i++) {
    cin >> A[i];
    sum += A[i];
  }
  
  if (N - sum >= 0)  cout << N - sum << endl;
  else  cout << -1 << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
