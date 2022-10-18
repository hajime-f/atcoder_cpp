#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  if ((s[0] != s[1]) && (s[0] != s[2]))  cout << s[0] << endl;
  else if ((s[0] != s[1]) && (s[1] != s[2]))  cout << s[1] << endl;
  else if ((s[0] != s[2]) && (s[1] != s[2]))  cout << s[2] << endl;
  else cout << -1 << endl;
  
  return 0;
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
