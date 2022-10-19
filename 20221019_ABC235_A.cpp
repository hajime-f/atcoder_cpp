#include <bits/stdc++.h>
using namespace std;

int main() {

  string abc;
  cin >> abc;

  int a = (int)(abc[0] - '0');
  int b = (int)(abc[1] - '0');
  int c = (int)(abc[2] - '0');

  int m1 = 100 * a + 10 * b + c;
  int m2 = 100 * b + 10 * c + a;
  int m3 = 100 * c + 10 * a + b;
  
  cout << m1 + m2 + m3 << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
