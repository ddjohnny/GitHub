#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int MinInd(const vector<float>& arr) {
	if (arr.empty()) {
		return -1;
	}
	float min = arr[0];
	int ind = 0;
	for (int i = 1; i < arr.size(); ++i) {
		if (arr[i] < min) {
			min = arr[i];
			ind = i;
		}
	}
	return ind;
}

vector<unsigned int> TermValue(const unsigned int n) {
	vector<unsigned int> arr;
	arr.push_back(5);
	for (int i = 2; i <= n; ++i) {
		unsigned int preres = arr[i - 2] - (i - 1) * (i - 1);
		for (unsigned int j = (i - 1) * 2 + 1; j <= 2 * i; ++j) {
			preres += j * j;
		}
		arr.push_back(preres);
	}
	return arr;
}

bool Pal(const vector<int> arr) {
	for (int i = 0; i < arr.size() / 2; ++i) {
		if (arr[i] != arr[arr.size() - i - 1]) {
			return false;
		}
	}
	return true;
}

vector<int> countDNA(const vector<char>& arr) {
	int cnt1 = 0, cnt2 = 0;
	vector<int> counter;
	for (int i = 0; i < arr.size(); ++i) {
		counter.push_back(abs(cnt1 - cnt2));
		if (arr[i] == 'C') {
			++cnt1;
		}
		else if (arr[i] == 'G') {
			++cnt2;
		}
	}
	return counter;
}

int main() {
	vector<float> arr = { 7, 132, 15.12f, -12, 0, 22 };
	cout <<"Minimal index: " << MinInd(arr) << endl;

	cout << " " << endl;

	vector<unsigned int> arr2 = TermValue(5);
	for (int i = 0; i < arr2.size(); ++i) {
		cout << arr2[i] << endl;
	}

	cout << " " << endl;

	vector<int> arr3 = { 8, 25, 48, 96, 48, 25, 8 };
	cout << Pal(arr3) << endl;

	cout << " " << endl;

	vector<char> arr4 = { 'G', 'C', 'G', 'C', 'G', 'G' };
	vector<int> res = countDNA(arr4);
	for (int i = 0; i < res.size(); ++i){
		cout << res[i] << endl;
	}
	return 0;
}
