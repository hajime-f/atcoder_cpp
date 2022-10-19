#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A, B;
  cin >> A >> B;

  if (0 < A && B == 0)  cout << "Gold" << endl;
  else if (A == 0 && 0 < B)  cout << "Silver" << endl;
  else  cout << "Alloy" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
