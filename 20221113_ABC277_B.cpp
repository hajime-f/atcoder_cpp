#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N;
  cin >> N;

  vector<string> S(N);
  for (int i = 0; i < N; i++)  cin >> S[i];

  for (int i = 0; i < N; i++) {
    if (S[i][0] != 'H' && S[i][0] != 'D' && S[i][0] != 'C' && S[i][0] != 'S') {
      cout << "No" << endl;
      return 0;
    }

    if (S[i][1] != 'A' && S[i][1] != '2' && S[i][1] != '3' && S[i][1] != '4' &&
        S[i][1] != '5' && S[i][1] != '6' && S[i][1] != '7' && S[i][1] != '8' &&
        S[i][1] != '9' && S[i][1] != 'T' && S[i][1] != 'J' && S[i][1] != 'Q' && S[i][1] != 'K') {
      cout << "No" << endl;
      return 0;
    }
    for (int j = i + 1; j < N; j++) {
      if (S[i] == S[j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  
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
