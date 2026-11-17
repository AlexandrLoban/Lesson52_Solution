#include "logic.h"

int main() {
	const int SIZE = 5;

	int group1[]{ 7, 8, 9, 10, 10 };
	int group2[]{ 8, 8, 9, 10, 10 };
	int group3[]{ 7, 8, 6, 10, 7 };

	cout << "Best group --> " << get_best_group(group1, group2, group3, SIZE) << endl;


	return 0;
}