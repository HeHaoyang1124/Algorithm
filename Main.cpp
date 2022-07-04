#include "Sort\Sort.h"
#include <iostream>
#include <chrono>
#include <thread>




long long arr[20000];

int main()
{	
	
	


	
	generates(arr, 20000);

	Selection_Sort(arr, 20000, true);

	printf("\n");

	return 0;
}