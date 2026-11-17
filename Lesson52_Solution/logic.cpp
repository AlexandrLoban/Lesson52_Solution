#include "logic.h"

double get_average(int* group, int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += group[i];
	}

	return sum / size;
}

int get_group_index(double* avgs, int size) {
	int max = 0;

	for (int i = 1; i < size; i++) {
		if (avgs[max] < avgs[i]) {
			max = i;
		}
	}

	return max;
}

int get_best_group(int* group1, int* group2, int* group3, int size) {
	double avg1 = get_average(group1, size);
	double avg2 = get_average(group2, size);
	double avg3 = get_average(group3, size);

	double avgs[]{ avg1, avg2, avg3 };
	int index = get_group_index(avgs, 3);

	return index + 1;
}