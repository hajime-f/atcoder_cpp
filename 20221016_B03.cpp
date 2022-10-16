#include <iostream>
using namespace std;

int N;
int A[109];
bool Ans = false;

int main() {
  cin >> N;

  for (int i = 1; i <= N; i++)  cin >> A[i];
  
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      if (i == j)  continue;
      for (int k = 1; k <= N; k++) {
        if ((i == k) || (j == k))  continue;
        if (A[i] + A[j] + A[k] == 1000)
          Ans = true;
      }
    }
  }
    
  if (Ans)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  
  return 0;
}
