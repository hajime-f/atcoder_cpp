#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, X;
  cin >> A >> B >> C >> X;

  double p;

  if (X <= A) {
    p = 1;
  } else if ((A + 1 <= X) && (X <= B)) {
    p = (double)C / (double)(B - A);
  } else {
    p = 0;
  }
  cout << p << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
