#include <bits/stdc++.h>
using namespace std;

int main() {

  string S;
  cin >> S;

  int A[9];
  for (int i = 0; i < 9; i++) {
    A[i] = (int)S[i] - 48;
  }

  sort(A, A + 9);
  
  for (int i = 1; i < 9; i++) {
    if ((A[i] - A[i - 1]) != 1) {
      cout << i << endl;
      return 0;
    }
  }

  if (A[0] == 0) 
    cout << 9 << endl;
  else
    cout << 0 << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
