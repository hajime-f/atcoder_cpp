#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, K;
  cin >> N >> K;

  vector<int> H(N);
  for (int i = 0; i < N; i++)  cin >> H[i];
  
  sort(H.begin(), H.end(), greater<>());
  
  long long d = 0;
  for (int i = K; i < N; i++)
    d += H[i];

  cout << d << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 0; i < N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A, A + N);  // 昇順ソート（配列）
// sort(A.begin(), A.end());  // 昇順ソート（ベクトル）

// sort(A, A + N, greater<>());  // 降順ソート

// vector<int> vec(N);  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
