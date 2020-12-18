#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> seperatePositives(vector<int> vec) {
	int Index = 0;

	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] <= 0) {
			swap(vec[Index], vec[i]);
			Index++;
		}
	}
	return vector <int>(vec.begin() + Index, vec.end());
}

int firstMissingPositive(vector<int> v) {
	int len = v.size();

	for (int i = 1; i <= len; i++) {

		vector<int>::iterator it;
		it = find(v.begin(), v.end(), i);
		if (it == v.end()) return i;

	}
}

int main() {
	std::vector<int> v = { 1,3,2,5};
	// std::vector<int> v = {1, 2, 0};

	std::cout << firstMissingPositive(seperatePositives(v)) << std::endl;
	system("pause");
	return 0;
}