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

/* Insertion Sort */
void insertion_sort(int array[], int len)
{
	int i, j;
	int temp;

	for (i = 1; i < len; i++)
		for (j = i; j > 0; j--)
			if (array[j] < array[j - 1]) {
				temp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = temp;	
		}
}
