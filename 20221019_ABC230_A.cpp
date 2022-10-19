#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;

  if (N >= 42) 
    printf("AGC%03d\n", N + 1);
  else
    printf("AGC%03d\n", N);
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
