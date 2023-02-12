#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#define MAXN int(2e5+5)
template <typename ty>
inline void read(ty& k) {
	char c = getchar();
	while (c < '0' || c>'9') c = getchar();
	for (k = 0; c >= '0' && c <= '9'; c = getchar()) k = k * 10 + c - '0';
}



int main() {
	int n, q;
	read(n);
	std::vector<int> a(n);
	for(auto & ai : a) read(ai);
	
	for(auto & ai : a) {
		
	}
	read(q);
	while(q--) {
			
	}
	return 0;
}
