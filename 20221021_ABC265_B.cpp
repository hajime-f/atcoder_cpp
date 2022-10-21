#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, M, T;
  cin >> N >> M >> T;

  int A[100009];
  for (int i = 1; i <= (N - 1); i++)  cin >> A[i];
  
  int X[100009], Y[100009];
  for (int i = 1; i <= M; i++)  cin >> X[i] >> Y[i];
  
  
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
