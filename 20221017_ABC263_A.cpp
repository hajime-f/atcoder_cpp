#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A[10];
  for (int i = 1; i <= 5; i++)  cin >> A[i];

  sort(A + 1, A + (5 + 1));

  if (A[1] == A[2] && A[3] == A[5])  cout << "Yes" << endl;
  else if (A[1] == A[3] && A[4] == A[5])  cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
