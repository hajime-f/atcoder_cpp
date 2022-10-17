#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int Y;
  cin >> Y;

  if (Y % 4 == 3)  cout << (Y / 4 * 4) + 6 << endl;
  if (Y % 4 == 0)  cout << (Y / 4 * 4) + 2 << endl;
  if (Y % 4 == 1)  cout << (Y / 4 * 4) + 2 << endl;
  if (Y % 4 == 2)  cout << Y << endl;
  
  return 0;
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
