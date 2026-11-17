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

int get_best_group(int groups[DEFAULT_SIZE][DEFAULT_SIZE], int row, int column) {
	double avgs[DEFAULT_SIZE]{};

	for (int i = 0; i < row; i++) {
		avgs[i] = get_average(groups[i], column);
	}

	int index = get_group_index(avgs, row);

	return index + 1;
}