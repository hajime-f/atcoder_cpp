#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string N;
  cin >> N;

  char m = N.back();
  
  if (m == '2' || m == '4' || m == '5' || m == '7' || m == '9')  cout << "hon" << endl;
  else if (m == '0' || m == '1' || m == '6' || m == '8')  cout << "pon" << endl;
  else  cout << "bon" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
