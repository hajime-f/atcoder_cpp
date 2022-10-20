#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A1, A2, A3, A4;
  cin >> A1 >> A2 >> A3 >> A4;

  cout << min(min(min(A1, A2), A3), A4) << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
