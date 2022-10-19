#include <bits/stdc++.h>
using namespace std;

int main() {

  int N, K, A;
  cin >> N >> K >> A;

  if (K <= (N - A + 1))  cout << A + K - 1 << endl;
  else  cout << K - (N - A + 1) << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
