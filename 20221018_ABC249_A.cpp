#include <bits/stdc++.h>
using namespace std;

int main() {

  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;
  
  int t_dist, a_dist;
  
  for (int k = 0; k < 100; k++) {
    if ((k * (A + C) < X) && (X <= k * (A + C) + A)) {
      t_dist = k * A * B + (X - k * (A + C)) * B;
    } else if ((k * (A + C) + A < X) && (X <= (k + 1) * (A + C))) {
      t_dist = (k + 1) * A * B;
    }
    
    if ((k * (D + F) < X) && (X <= k * (D + F) + D)) {
      a_dist = k * D * E + (X - k * (D + F)) * E;
    } else if ((k * (D + F) + D < X) && (X <= (k + 1) * (D + F))) {
      a_dist = (k + 1) * D * E;
    }
  }
  
  if (t_dist > a_dist)  cout << "Takahashi" << endl;
  else if (t_dist == a_dist)  cout << "Draw" << endl;
  else cout << "Aoki" << endl;

  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
