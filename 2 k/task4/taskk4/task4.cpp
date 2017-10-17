#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int MinIndex(const vector<float>& arr) {
	if (arr.empty()) {
		cout << "Is empty";
	}

	float min = arr[0];
	int index = 0;
	for (int i = 1; i < arr.size(); ++i) {
		if (arr[i] < min) {
			min = arr[i];
			index = i;
		}
	}
	return index;
}


bool Palindrom(const vector<int> arr) {
	for (int i = 0; i < arr.size() / 2; ++i) {
		if (arr[i] != arr[arr.size() - i - 1]) {
			return false;
		}
	}
	return true;
}


vector<int> countDNA(const vector<char>& arr) {
	int c1 = 0, c2 = 0;
	vector<int> counter;
	for (int i = 0; i < arr.size(); ++i) {
		counter.push_back(abs(c1 - c2));
		if (arr[i] == 'C') {
			++c1;
		}
		else if (arr[i] == 'G') {
			++c2;
		}
	}
	return counter;
}


int main() {
	vector<float> arr = { 7, 132, 15.12f, -12, 0, 22 };
	cout << "Minimal index: " << MinIndex(arr) << endl << endl;

	vector<int> arr3 = { 8, 25, 48, 96, 48, 25, 8 };
	cout << Palindrom(arr3) << endl << endl;

	vector<char> arr4 = { 'G', 'C', 'G', 'C', 'G', 'G' };
	vector<int> res = countDNA(arr4);
	for (int i = 0; i < res.size(); ++i){
		cout << res[i] << endl;
	}
	return 0;
}
