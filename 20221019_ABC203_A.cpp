#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int a, b, c;
  cin >> a >> b >> c;

  int z = 0;
  
  if (a == b)  z = c;
  if (a == c)  z = b;
  if (b == c)  z = a;

  cout << z << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
