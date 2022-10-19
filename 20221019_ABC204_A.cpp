#include <bits/stdc++.h>
using namespace std;

int main() {
  
  char x, y;
  cin >> x >> y;
  
  char z;

  if (x == y)  z = x;
  else {
    if (x == '0' && y == '1')  z = '2';
    if (x == '0' && y == '2')  z = '1';
    if (x == '1' && y == '2')  z = '0';
    if (x == '1' && y == '0')  z = '2';
    if (x == '2' && y == '0')  z = '1';
    if (x == '2' && y == '1')  z = '0';
  }
  
  cout << z << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
