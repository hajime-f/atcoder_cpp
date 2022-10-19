#include <bits/stdc++.h>
using namespace std;

long func(int t) {
  return pow(t, 2) + 2 * t + 3;
}


int main() {

  int t;
  cin >> t;

  cout << func(func(func(t) + t) + func(func(t))) << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
