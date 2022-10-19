#include <bits/stdc++.h>
using namespace std;

int main() {

  int N;
  int A, B;

  cin >> N;
  cin >> A >> B;
  
  bool flag[200009];
  for (int i = 0; i < 200009; i++)  flag[i] = true;
  
  
  for (int i = 1; i <= N; i++) {
    
    if (i % 3 == 0)  flag[i] = false;
    if (i % 5 == 0)  flag[i] = false;
    
  }

  flag[N] = false;

  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (flag[i]) {
      cnt += 1;
    }
    
  }
  cout << cnt << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
