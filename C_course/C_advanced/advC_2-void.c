#include <stdio.h>

int main() {

	int i=0;

	for (i=0; i<=10; i++) {
		if (i==3) {
			continue;
		}
		printf("%d\n", i);
	}
	// All numbers from 0 to 10 are printed,
    // 	except for 3, because continue skipped the printf when i == 3.





	return 0;
}
// Iteration means one complete run or cycle of a loop.