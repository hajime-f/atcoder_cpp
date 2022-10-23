#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int H, W;
  cin >> H >> W;

  string C[1000];
  for (int i = 0; i < H; i++)  cin >> C[i];
  
  int X[1000];
  for (int i = 0; i < W; i++)  X[i] = 0;

  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      if (C[i][j] == '#')  X[j] += 1;
  
  for (int i = 0; i < W; i++)
    cout << X[i] << " ";
  cout << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
