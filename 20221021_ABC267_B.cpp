#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string S;
  cin >> S;

  if (S[0] != '0') {
    cout << "No" << endl;
    return 0;
  }
  
  bool col[7];
  for (int i = 0; i < 7; i++)  col[i] = true;
  
  if (S[7 - 1] == '0')  col[0] = false;
  if (S[4 - 1] == '0')  col[1] = false;
  if (S[2 - 1] == '0' && S[8 - 1] == '0')  col[2] = false;
  if (S[1 - 1] == '0' && S[5 - 1] == '0')  col[3] = false;
  if (S[3 - 1] == '0' && S[9 - 1] == '0')  col[4] = false;
  if (S[6 - 1] == '0')  col[5] = false;
  if (S[10 - 1] == '0')  col[6] = false;
  
  bool flag1 = false;
  bool flag2 = false;
  bool flag3 = false;

  for (int i = 0; i < 7; i++) {
    if (col[i] && !flag1 && !flag2 && !flag3)  flag1 = true;
    if (!col[i] && flag1 && !flag2 && !flag3)  flag2 = true;
    if (col[i] && flag1 && flag2 && !flag3)  flag3 = true;
  }

  if (flag1 & flag2 & flag3)  cout << "Yes" << endl;
  else  cout << "No" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
