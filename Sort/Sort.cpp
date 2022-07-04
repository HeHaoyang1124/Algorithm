#include "Sort.h"
void generates(long long* arr, long long length)
{

	for (long long i = 0; i < length; i++)
		arr[i] = rand() % 1000;
}



void swap(long long& a, long long& b)
{

	long long temp = a;
	a = b;
	b = temp;
}

void Selection_Sort(long long* arr, long long length, bool Small_in_the_former)
{
	Timer T;

	for (long long i = 0; i < length; i++)
	{
		long long smallest_index = i;
		for (long long j = i + 1; j < length; j++)
			if (arr[j] < arr[smallest_index])
				smallest_index = j;


		swap(arr[i], arr[smallest_index]);
	}
	printf("Selection_Sort took time");
}


