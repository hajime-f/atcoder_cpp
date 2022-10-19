#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string S;
  cin >> S;
  
  int X, Y;
  
  if (S.size() == 4) {
    int X1 = (int)(S[0] - '0');
    int X2 = (int)(S[1] - '0');
    X = 10 * X1 + X2;
    Y = (int)(S[3] - '0');
  } else {
    X = (int)(S[0] - '0');
    Y = (int)(S[2] - '0');
  }

  if (0 <= Y && Y <= 2)  cout << X << "-" << endl;
  else if (3 <= Y && Y <= 6)  cout << X << endl;
  else cout << X << "+" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
