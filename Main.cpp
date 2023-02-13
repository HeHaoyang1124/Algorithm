#include <vector>
#include <cstdio>
#include <iostream>
#include <algorithm>

inline void read(ty &k) {
	char c = getchar();
	while(c < '0' || c > '9') c = getchar();
	for(k = 0; c >= '0' && c <= '9'; c = getchar())
		k = k * 10 + c -'0';
}

int n, q;
std::vector<int> reader, writer;

int main() {
	read(n);
	reader.resize(n);
	for(auto &i : reader) read(i);
	std::sort(reader.begin(), reader.end());

	int num = 0;
	{
		int idx = 0, ;
		while(idx < reader.end()) {
			if()
		}
	}


	read(q);
	for(int i = 0, book; i < q; i++) {
		read(book);


	}



	return 0;
}
