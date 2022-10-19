#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A, B, C;
  cin >> A >> B >> C;

  string s;
  
  if (C == 0) {
    while (true) {
      if (A > 0) {
        A -= 1;
      } else {
        s = "Aoki";
        break;
      }
      if (B > 0) {
        B -= 1;
      } else {
        s = "Takahashi";
        break;
      }
    }
  } else {
    while (true) {
      if (B > 0) {
        B -= 1;
      } else {
        s = "Takahashi";
        break;
      }
      if (A > 0) {
        A -= 1;
      } else {
        s = "Aoki";
        break;
      }
    }
  }

  cout << s << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
