#include <bits/stdc++.h>
using namespace std;

int main() {

  int x1, y1;
  int x2, y2;
  int x3, y3;

  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  
  if (x1 == x2) {
    if (y2 == y3)  cout << x3 << " " << y1;
    if (y1 == y3)  cout << x3 << " " << y2;
  } else if (x1 == x3) {
    if (y2 == y3)  cout << x2 << " " << y1;
    if (y1 == y2)  cout << x2 << " " << y3;
  } else if (x2 == x3) {
    if (y1 == y2)  cout << x1 << " " << y3;
    if (y1 == y3)  cout << x1 << " " << y2;
  } else {
    cout << -1;
  }
  cout << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
