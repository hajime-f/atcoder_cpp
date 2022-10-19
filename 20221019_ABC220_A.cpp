#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A, B, C;
  cin >> A >> B >> C;

  for (int i = A; i <= B; i++) {
    if (i % C == 0) {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
