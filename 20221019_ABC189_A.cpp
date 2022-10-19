#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string s;
  cin >> s;

  if (s[0] == s[1] && s[1] == s[2])  cout << "Won" << endl;
  else  cout << "Lost" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
