#include <bits/stdc++.h>
using namespace std;

int main() {

  int L1, R1, L2, R2;
  cin >> L1 >> R1 >> L2 >> R2;

  int M = 0;
  
  if (R1 > L2) {
    M = (R2 - L2) - (R1 - L1) + 1;
  } 

  cout << M << endl;
  
  return 0;
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
