#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;
  
  string A[1000];
  for (int i = 0; i < N; i++)  cin >> A[i];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j)  continue;
      if ((A[i][j] == 'W' && A[j][i] != 'L')
          || (A[i][j] == 'D' && A[j][i] != 'D')
          || (A[i][j] == 'L' && A[j][i] != 'W')) {
        cout << "incorrect" << endl;
        return 0;
      }
    }
  }

  cout << "correct" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
