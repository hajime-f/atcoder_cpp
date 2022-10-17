#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  int N;
  vector<int> odd, even;
  
  cin >> N;
  for (int i = 1; i <= N; i++) {
    int a;
    cin >> a;

    if (a & 1)
      odd.push_back(a);
    else
      even.push_back(a);
  }
  
  sort(odd.rbegin(), odd.rend());
  sort(even.rbegin(), even.rend());

  int mx = -1;
  if (odd.size() >= 2)
    mx = max(mx, odd[0] + odd[1]);
  if (even.size() >= 2)
    mx = max(mx, even[0] + even[1]);

  cout << mx << endl;
  
  return 0;
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;  // 二分探索

// sort(A + 1, A + (N + 1));  // ソート

// vector<int> a;  // ベクターの宣言

