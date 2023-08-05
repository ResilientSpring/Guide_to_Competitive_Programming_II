#include <iostream>
#include <vector>
using namespace std;

void search(int k);

int n = 3;

// A vector that will contain the elements of each subsets.
vector<int> subset;

int main() {


}

void search(int k) {

	if (k == n + 1) {
		// process subset
	}
	else {
		// include k in the subset.
		subset.push_back(k);
		search(k + 1);
		subset.pop_back();
		// don't include k in the subset
		search(k + 1);
	}
		


}