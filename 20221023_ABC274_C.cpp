#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  int A[100000];

  cin >> N;
  for (int i = 0; i < N; i++)  cin >> A[i];
  
  for (int k = 0; k < 2 * N + 1; k++)
    cout << A[k % 2] % 2 << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
