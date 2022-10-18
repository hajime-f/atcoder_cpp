#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  if (abs(a - b) == 1) {
    cout << "Yes" << endl;
  } else {
    if ((a == 1 && b == 10) || (a == 10 && b == 1)) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
