#include <bits/stdc++.h>
using namespace std;

int main() {

  int V, A, B, C;
  cin >> V >> A >> B >> C;

  while (true) {
    
    if ((V - A) < 0) {
      cout << 'F' << endl;
      break;
    } else {
      V -= A;
    }

    if ((V - B) < 0) {
      cout << 'M' << endl;
      break;
    } else {
      V -= B;
    }
    
    if ((V - C) < 0) {
      cout << 'T' << endl;
      break;
    } else {
      V -= C;
    }
    
  }
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
