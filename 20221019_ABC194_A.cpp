#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int A, B;
  cin >> A >> B;

  int m;
  
  if ((A + B) >= 15 && B >= 8)  m = 1;
  else if ((A + B) >= 10 && B >= 3)  m = 2;
  else if ((A + B) >= 3)  m = 3;
  else m = 4;

  cout << m << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
