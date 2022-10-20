#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, Q;
  cin >> N >> Q;

  vector< vector<int> > a(N);
  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    a[i] = vector<int>(L);
    for (int j = 0; j < L; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < Q; i++) {
    int s, t;
    cin >> s >> t;
    cout << a[s - 1][t - 1] << endl;
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
