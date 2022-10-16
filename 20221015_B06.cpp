#include <iostream>
using namespace std;

int main() {
  int N, Q;
  int A[100009];
  int L[100009], R[100009];
  
  cin >> N;
  for (int i = 1; i <= N; i++)  cin >> A[i];
  cin >> Q;
  for (int j = 1; j <= Q; j++)  cin >> L[j] >> R[j];
  
  int atari[100009], hazure[100009];
  atari[0] = 0;
  hazure[0] = 0;
  for (int i = 1; i <= N; i++) {
    if (A[i] == 0) {
      atari[i] = atari[i - 1];
      hazure[i] = hazure[i - 1] + 1;
    } else {
      atari[i] = atari[i - 1] + 1;
      hazure[i] = hazure[i - 1];
    }
  }

  for (int j = 1; j <= Q; j++) {
    int s1 = atari[R[j]] - atari[L[j] - 1];
    int s2 = hazure[R[j]] - hazure[L[j] - 1];

    if (s1 > s2) {
      cout << "win" << endl;
    } else if (s1 == s2) {
      cout << "draw" << endl;
    } else {
      cout << "lose" << endl;
    }
  }
  
  return 0;
}
