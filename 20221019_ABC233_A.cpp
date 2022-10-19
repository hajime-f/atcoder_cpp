#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, Y;
  cin >> X >> Y;

  int m = ceil((double)(Y - X) / (double)10);
  if (m < 0)  m = 0;
  
  cout << m << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
