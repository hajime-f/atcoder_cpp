#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A, B, C;
  cin >> A >> B >> C;

  if (pow(A, 2) + pow(B, 2) < pow(C, 2))  cout << "Yes" << endl;
  else  cout << "No" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
