#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  vector<vector<int>> D(N);
  for (int i = 0; i < N; i++) {
    D[i] = vector<int>(2);
    cin >> D[i][0] >> D[i][1];
  }

  bool ans = false;
  for (int i = 0; i < (N - 2); i++) {
    if (D[i][0] == D[i][1] &&
        D[i + 1][0] == D[i + 1][1] &&
        D[i + 2][0] == D[i + 2][1]) {
      ans = true;
      break;
    }
  }

  if (ans)  cout << "Yes" << endl;
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
