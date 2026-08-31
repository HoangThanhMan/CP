#include <bits/stdc++.h>
using namespace std;

struct Rect {
	int x1, y1, x2, y2;
	int area() { return (x2 - x1) * (y2 - y1); }
};

/*
   Main Idea: If B intersects entirely in the x or y direction, cut it.
   This method cuts rectangle A based on rectangle B. (A - white sheet, B -
   black sheet) We can cut rectangle A if B covers all of x1->x2 or y1->y2.
 */
Rect cut(Rect A, Rect B) {
	// If B cuts A from the left side
	if (A.x1 >= B.x1 && B.x2 >= A.x1 && B.y1 <= A.y1 && B.y2 >= A.y2) {
		A.x1 = B.x2;
		A.x2 = max(A.x2, B.x2);  // If B covers A entirely
	}

	// If B cuts A from the right side
	if (A.x2 >= B.x1 && B.x2 >= A.x2 && B.y1 <= A.y1 && B.y2 >= A.y2) {
		A.x2 = B.x1;
		A.x1 = min(A.x1, B.x1);  // If B covers A entirely
	}

	// If B cuts A from the bottom side
	if (A.y1 >= B.y1 && B.y2 >= A.y1 && B.x1 <= A.x1 && B.x2 >= A.x2) {
		A.y1 = B.y2;
		A.y2 = max(A.y2, B.y2);  // If B covers A entirely
	}

	// If B cuts A from the top side
	if (A.y2 >= B.y1 && B.y2 >= A.y2 && B.x1 <= A.x1 && B.x2 >= A.x2) {
		A.y2 = B.y1;
		A.y1 = min(A.y1, B.y1);  // If B covers A entirely
	}
	return A;
}

int main() {
	Rect A, B, C;
	cin >> A.x1 >> A.y1 >> A.x2 >> A.y2;
	cin >> B.x1 >> B.y1 >> B.x2 >> B.y2;
	cin >> C.x1 >> C.y1 >> C.x2 >> C.y2;

	A = cut(A, B);
	A = cut(A, C);
	// Print NO only if the remaining cut area is 0.
	if (A.area() == 0) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}
