#include <bits/stdc++.h>
using namespace std;

int main() {

  long double H;
  cin >> H;
  
  long double horizon = sqrt(H * (12800000 + H));
  printf("%12Lf\n", horizon);
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
