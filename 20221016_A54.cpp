#include <iostream>
#include <map>
using namespace std;

int main() {
  
  int Q;
  int qt[100009];
  string x[100009];
  int y[100009];
  map<string, int> Map;

  cin >> Q;
  for (int i = 1; i <= Q; i++) {
    cin >> qt[i];
    if (qt[i] == 1)  cin >> x[i] >> y[i];
    if (qt[i] == 2)  cin >> x[i];
  }
  
  for (int i = 1; i <= Q; i++) {
    if (qt[i] == 1)  Map[x[i]] = y[i];
    if (qt[i] == 2)  cout << Map[x[i]] << endl;
  }
  
  return 0;
}

// cin >> N >> X;
// for (int i = 1; i <= N; i++)  cin >> A[i];

// int pos = lower_bound(A + 1, A + (N + 1), X[j]) - A;

// sort(A + 1, A + (N + 1));

