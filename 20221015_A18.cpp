#include <iostream>
using namespace std;

int main() {
  
  int N, S;
  int A[69];
  bool dp[69][10009];
  bool ans = false;
  
  cin >> N >> S;
  for (int i = 1; i <= N; i++)  cin >> A[i];

  dp[0][0] = true;
  for (int j = 1; j <= S; j++)  dp[0][j] = false;
  
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j <= S; j++) {
      
      
      
    }
  }
  
  if (dp[N][S]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}
