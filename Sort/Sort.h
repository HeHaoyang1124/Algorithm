#pragma once
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

class Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
public:
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<float> duration = end - start;

		std::cout << duration.count() << std::endl;

	}
};

void generates(long long* arr, long long length);
void swap(long long& a, long long& b);
void Selection_Sort(long long* arr, long long length, bool Small_in_the_former = true);