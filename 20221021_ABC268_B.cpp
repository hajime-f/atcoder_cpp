#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string S, T;
  cin >> S >> T;

  if (S.size() > T.size())  cout << "No" << endl;
  else {
    int cnt = 0;
    for (int i = 0; i < S.size(); i++) {
      if (S[i] == T[i])  cnt += 1;
    }
    if (S.size() == cnt)  cout << "Yes" << endl;
    else  cout << "No" << endl;
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
