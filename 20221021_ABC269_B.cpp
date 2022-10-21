#include <bits/stdc++.h>
using namespace std;

int main() {

  char S[10][10];
  for (int i = 0; i < 10; i++)  cin >> S[i];

  char S_T[10][10];
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < 10; j++)
      S_T[i][j] = S[j][i];
  
  int col_start_t = 0, col_end_t = 0;
  bool start_flag_t = false, break_flag_t = false;
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (S_T[i][j] == '#' && !start_flag_t) {
        col_start_t = j + 1;
        start_flag_t = true;
      }
      if (S_T[i][j] == '.' && start_flag_t) {
        col_end_t = j;
        break_flag_t = true;
        break;
      }
      if (j == 9 && start_flag_t) {
        col_end_t = 10;
        break_flag_t = true;
        break;
      }
    }
    if (break_flag_t)  break;
  }

  cout << col_start_t << " " << col_end_t << endl;

  
  int col_start = 0, col_end = 0;
  bool start_flag = false, break_flag = false;
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (S[i][j] == '#' && !start_flag) {
        col_start = j + 1;
        start_flag = true;
      }
      if (S[i][j] == '.' && start_flag) {
        col_end = j;
        break_flag = true;
        break;
      }
      if (j == 9 && start_flag) {
        col_end = 10;
        break_flag = true;
        break;
      }
    }
    if (break_flag)  break;
  }

  cout << col_start << " " << col_end << endl;
  
  return 0;
  
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> vec(N);  // ベクターの宣言（１次元）

// vector< vector<int> > a(N);  // ベクターの宣言（２次元）
// a[i] = vector<int>(L);
