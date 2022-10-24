#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  vector< vector<int> > a(N);
  for (i = 0; i < N; i++) {
    a[i] = vector<int>(i + 1);
    for (j = 0; j <= i; j++) {
      if (j == 0 || j = i)  a[i][j] = 1;
    } else {
      a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
  }

  for (i = 0; i < N; i++) {
    for (j = 0; j <= i; i++) {
      cout << a[i][j];
    }
    cout << endl;
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
