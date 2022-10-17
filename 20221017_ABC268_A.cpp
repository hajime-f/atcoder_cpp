#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N = 5;
  int A[N + 1];
  for (int i = 1; i <= N; i++)  cin >> A[i];
  
  sort(A + 1, A + (N + 1));

  int cnt = 1;
  for (int i = 2; i <= N; i++) {
    if (A[i] != A[i - 1])  cnt++;
  }

  cout << cnt << endl;
  
  return 0;
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
