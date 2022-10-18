#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (A < C)  cout << "Takahashi" << endl;
  else if (A > C)  cout << "Aoki" << endl;
  else {
    if (B < D)  cout << "Takahashi" << endl;
    else if (B > D)  cout << "Aoki" << endl;
    else {
      cout << "Takahashi" << endl;
    }
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
