#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string A, B;
  cin >> A >> B;
  
  int s1 = (int)(A[0] - '0') + (int)(A[1] - '0') + (int)(A[2] - '0');
  int s2 = (int)(B[0] - '0') + (int)(B[1] - '0') + (int)(B[2] - '0');
  
  if (s1 >= s2)  cout << s1 << endl;
  else  cout << s2 << endl;
             
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
