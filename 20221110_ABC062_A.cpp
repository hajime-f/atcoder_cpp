#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int x, y;
  cin >> x >> y;

  if (x == 2 || y == 2) {
    cout << "No" << endl;
    return 0;
  }
  
  if (x == 1) {
    if (y == 4 || y == 6 || y == 9 || y == 11) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;      
    }
  }

  if (x == 3) {
    if (y == 4 || y == 6 || y == 9 || y == 11) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;      
    }
  }
  
  if (x == 4) {
    if (y == 6 || y == 9 || y == 11) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;      
    }
  }
  
  if (x == 5) {
    if (y == 6 || y == 9 || y == 11) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;      
    }
  }
  
  if (x == 6) {
    if (y == 9 || y == 11) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;      
    }
  }
  
  if (x == 7) {
    if (y == 9 || y == 11) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;      
    }
  }
  
  if (x == 8) {
    if (y == 9 || y == 11) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;      
    }
  }

  if (x == 9) {
    if (y == 11) {
      cout << "Yes" << endl;
      return 0;
    } else {
      cout << "No" << endl;
      return 0;      
    }
  }
  
  if (x == 10) {
    if (y == 11) {
      cout << "No" << endl;
      return 0;
    } else {
      cout << "Yes" << endl;
      return 0;      
    }
  }

  cout << "No" << endl;
  
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
