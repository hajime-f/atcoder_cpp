#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  string S;

  cin >> N;
  cin >> S;

  for (int i = 0; i < S.length(); i++) {
    int a = (int)(S[i] - 'A') + N;
    if (a >= 26)  a = a - 26;
    cout << (char)(a + 'A');
  }

  cout << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 0; i < N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A, A + N);  // 昇順ソート
// sort(A, A + N, greater<>());  // 降順ソート

// vector<int> vec(N);  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
