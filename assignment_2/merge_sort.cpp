#include <iostream>
#include <vector>

using namespace std;

void MergeSortedIntervals(vector<int>& v, int s, int m, int e) {
	
  // temp is used to temporary store the vector obtained by merging, elements from [s to m] and [m+1 to e] in v
	vector<int> temp;

	int i, j;
	i = s;
	j = m + 1;

	while (i <= m && j <= e) {

		if (v[i] <= v[j]) {
			temp.push_back(v[i]);
			++i;
		}
		else {
			temp.push_back(v[j]);
			++j;
		}

	}

	while (i <= m) {
		temp.push_back(v[i]);
		++i;
	}

	while (j <= e) {
		temp.push_back(v[j]);
		++j;
	}

	for (int i = s; i <= e; ++i)
		v[i] = temp[i - s];

}

void MergeSort(vector<int>& v, int s, int e) {
  // Sorts the array in the range [s to e] in v using merge sort algorithm
	if (s < e) {
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSortedIntervals(v, s, m, e);
    for (int i = 0; i < v.size(); ++i) {
		  cout << v[i] << ' ';
	  }
    cout<<"\t"<<endl;

	}
}

int main() {
  
	int size;
	vector<int> a;

	cout << "Enter Size"<<endl;
	cin >> size;
	a = vector<int>(size);
	cout << "Enter Elements"<<endl;
	for (int i = 0; i < size; ++i) {
		cin >> a[i];
	}

	MergeSort(a, 0, size - 1);

	cout << "After Sorting: ";
	for (int i = 0; i < size; ++i) {
		cout << a[i] << ' ';
	}

  cout<<endl;

}
