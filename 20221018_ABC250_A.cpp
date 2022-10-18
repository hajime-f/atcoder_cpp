#include <bits/stdc++.h>
using namespace std;

int main() {

  int H, W;
  int R, C;

  cin >> H >> W;
  cin >> R >> C;

  int cnt = 0;
  if ((C - 1) > 0)  cnt += 1;
  if ((C + 1) <= W)  cnt += 1;
  if ((R - 1) > 0)  cnt += 1;
  if ((R + 1) <= H)  cnt += 1;

  cout << cnt << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec;  // ベクターの宣言
