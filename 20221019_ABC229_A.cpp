#include <bits/stdc++.h>
using namespace std;

int main() {

  string S1, S2;
  cin >> S1;
  cin >> S2;

  string S = S1 + S2;
  
  if (S[0] == '#' && S[1] == '#')  cout << "Yes" << endl;
  else if (S[0] == '#' && S[2] == '#')  cout << "Yes" << endl;
  else if (S[1] == '#' && S[3] == '#')  cout << "Yes" << endl;
  else if (S[2] == '#' && S[3] == '#')  cout << "Yes" << endl;
  else if (S[0] == '#' && S[1] == '#' && S[3] == '#')  cout << "Yes" << endl;
  else if (S[0] == '#' && S[2] == '#' && S[3] == '#')  cout << "Yes" << endl;
  else if (S[0] == '#' && S[1] == '#' && S[2] == '#' && S[4] == '#')  cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
