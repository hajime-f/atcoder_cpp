#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int R, C;
  cin >> R >> C;

  int A[2][2];
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 2; j++)
      cin >> A[i][j];

  cout << A[R - 1][C - 1] << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
