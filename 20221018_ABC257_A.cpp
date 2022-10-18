#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, X;
  cin >> N >> X;

  string s, m = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < N; j++) {
      s.push_back(m[i]);
    }
  }
  cout << s[X - 1] << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
