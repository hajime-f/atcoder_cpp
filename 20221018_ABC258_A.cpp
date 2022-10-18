#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int K;
  cin >> K;

  int hour, minute;

  if (K < 60) {
    hour = 21;
  } else {
    hour = 22;
  }

  minute = K % 60;

  printf("%d:%02d\n", hour, minute);
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
