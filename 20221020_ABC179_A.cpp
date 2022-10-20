#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string S;
  cin >> S;

  int n = S.size();
  if (S[n - 1] != 's')  cout << S + 's' << endl;
  else  cout << S + "es" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
