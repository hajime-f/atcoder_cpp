#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string S;
  cin >> S;

  int m = S.size();

  if (S[m - 1] == 'r' && S[m - 2] == 'e')  cout << "er" << endl;
  else cout << "ist" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
