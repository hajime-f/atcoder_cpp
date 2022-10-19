#include <bits/stdc++.h>
using namespace std;

int main() {

  int X, Y;
  cin >> X >> Y;

  string m;
  
  if (X < Y) {
    if ((X + 3) > Y)  m = "Yes";
    else  m = "No";
  } else {
    if ((Y + 3) > X)  m = "Yes";
    else  m = "No";
  }

  cout << m << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
