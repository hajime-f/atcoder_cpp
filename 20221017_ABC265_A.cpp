#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int X, Y, N;
  cin >> X >> Y >> N;
  
  if (X * 3 > Y) {
    cout << (N / 3) * Y + (N % 3) * X << endl;
  } else {
    cout << X * N << endl;
  }
  
  // int dp[109];
  // dp[1] = 0;
  // dp[2] = X;
  // dp[3] = dp[2] + X;
  
  // for (int i = 4; i <= N; i++) {
  //   dp[i] = min(dp[i - 1] + X, dp[i - 3] + Y);
  // }

  // cout << dp[N] << endl;
  
  return 0;
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
