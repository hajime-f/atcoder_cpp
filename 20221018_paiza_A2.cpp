#include <bits/stdc++.h>
using namespace std;

int cont_number(int b[], int n) {

  cnt = 0;
  sort(b, b + n);
  
  for (int i = 0; i < n; i++) {
    
    
    
  }

  return cnt;
  
}


int main() {

  int N;
  string s[10];
  int a[10][10];

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> s[i];
    for (int j = 0; j < N; j++) {
      a[i][j] = (int)(s[i][j] - '0');
    }
  }

  
  
  cnt = cont_number(*a, N);
  
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
