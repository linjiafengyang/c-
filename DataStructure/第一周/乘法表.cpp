#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			cout << i << '*' << j << '=' << i * j << "\t";
			if (i == j) {
				cout << endl;
			}
		}
	}
	return 0;
}