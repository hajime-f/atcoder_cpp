#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int X;
  cin >> X;
  
  if (0 <= X && X < 40)  cout << (40 - X) << endl;
  else if (40 <= X && X < 70)  cout << (70 - X) << endl;
  else if (70 <= X && X < 90)  cout << (90 - X) << endl;
  else  cout << "expert" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
