#include <iostream>
using namespace std;

int N, X;
int A[109];
bool Ans = false;

int main() {
  cin >> N >> X;

  for (int i = 1; i <= N; i++)
    cin >> A[i];

  for (int i = 1; i <= N; i++)
    if (A[i] == X)
          Ans = true;
  
  if (Ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
  return 0;
}
