#includeiostream
#includevector
#includealgorithm
using namespace std;

vectorint seperatePositives(vectorint vec) {
	int Index = 0;

	for (int i = 0; i  vec.size(); ++i) {
		if (vec[i] = 0) {
			swap(vec[Index], vec[i]);
			Index++;
		}
	}
	return vector int(vec.begin() + Index, vec.end());
}

int firstMissingPositive(vectorint v) {
	int len = v.size();

	for (int i = 1; i = len; i++) {

		vectorintiterator it;
		it = find(v.begin(), v.end(), i);
		if (it == v.end()) return i;

	}
}

int main() {
	stdvectorint v = { 1,3,2,5};
	 stdvectorint v = {1, 2, 0};

	stdcout  firstMissingPositive(seperatePositives(v))  stdendl;
	system(pause);
	return 0;
}