#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string S;
  cin >> S;

  bool has_upper_case = false;
  bool has_lower_case = false;

  for (int i = 0; i < S.length(); i++) {
    if ('A' <= S[i] && S[i] <= 'Z')  has_upper_case = true;
    if ('a' <= S[i] && S[i] <= 'z')  has_lower_case = true;
  }
  
  int diff[58];
  for (int i = 0; i < 58; i++)  diff[i] = 0;
  
  for (int i = 0; i < S.length(); i++) {
    int m = (int)(S[i] - 'A');
    diff[m] += 1;
  }

  bool has_diff = true;
  for (int i = 0; i < 52; i++) {
    if (diff[i] > 1)  has_diff = false;
  }

  if (has_upper_case && has_lower_case && has_diff)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
