#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int K;
  cin >> K;

  string S;
  cin >> S;

  if (S.length() <= K) {
    cout << S << endl;
  } else {
    string sub_S = S.substr(0, K);
    cout << sub_S << "..." << endl;
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 0; i < N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A, A + N);  // 昇順ソート
// sort(A, A + N, greater<>());  // 降順ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
