#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int K;
  int A, B;
  cin >> K;
  cin >> A >> B;

  for (int i = A; i <= B; i++) {
    if (i % K == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }

  cout << "NG" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);