#include <bits/stdc++.h>
using namespace std;

int main() {

  int S, T, X;
  cin >> S >> T >> X;

  if (S < T) {
    if (S <= X && X < T)  cout << "Yes" << endl;
    else  cout << "No" << endl;
  } else {
    if ((S <= X && X <= 23) || (0 <= X && X < T))  cout << "Yes" << endl;
    else  cout << "No" << endl;
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
