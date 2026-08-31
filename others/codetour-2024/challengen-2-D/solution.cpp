#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<char> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int scoreA = 0, scoreB = 0;

    for (int i = 0; i < N; ++i) {
        char cardA = A[i];
        char cardB = B[i];

        if (cardA == 'R' && cardB == 'S') {
            scoreA++;
        } else if (cardA == 'S' && cardB == 'P') {
            scoreA++;
        } else if (cardA == 'P' && cardB == 'R') {
            scoreA++;
        } else if (cardB == 'R' && cardA == 'S') {
            scoreB++;
        } else if (cardB == 'S' && cardA == 'P') {
            scoreB++;
        } else if (cardB == 'P' && cardA == 'R') {
            scoreB++;
        }
    }

    int maxDifference = abs(scoreA - scoreB);
    cout << maxDifference << endl;

    return 0;
}
