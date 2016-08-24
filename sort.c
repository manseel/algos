/* Implementation of various sorting algorithms */


/* Bubble Sort */
void bubble_sort(int array[], int len)
{
	int i;
	int temp;

	enum eos {GOING, DONE};
	int flag = GOING;

	while (flag == GOING) {
		flag = DONE;
		for (i = 0; i < len - 1; i++)
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				flag = GOING;
			}
	}
}
