#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int X, Y, Z;
  cin >> X >> Y >> Z;
  
  if (X * Y > 0 && Y * Z > 0 && (abs(Z) - abs(Y)) > 0 && (abs(X) - abs(Y)) > 0)  cout << -1 << endl;
  else {
    if ((X * Y < 0) || (X * Y > 0 && (abs(Y) - abs(X)) >= 0))  cout << abs(X)  << endl;
    else {
      if (Y * Z > 0)  cout << abs(X) << endl;
      else  cout << abs(X) + 2 * abs(Z) << endl;
    }
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
