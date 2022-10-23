#include <iostream>
using namespace std;

int N;
long A[100009];
int Q;
long X[100009];

int main() {
  
  cin >> N;
  for (int i = 1; i <= N; i++)  cin >> A[i];
  cin >> Q;
  for (int j = 1; j <= Q; j++)  cin >> X[j];
  
  sort(A + 1, A + (N + 1));

  for (int j = 1; j <= Q; j++) {
    int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;
    cout << pos - 1 << endl;
  }

  return 0;
}


// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート


