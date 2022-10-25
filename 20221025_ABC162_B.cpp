#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  cin >> N;
  
  long long s = 0;
  
  for (int i = 1; i <= N; i++) {
    if (i % 3 == 0 || i % 5 == 0)  continue;
    s += i;
  }
  
  cout << s << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
