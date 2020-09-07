#include <iostream>

using namespace std;

void Isort (int *array, int low, int high) {
    //Insertion sort
    for (int i = low; i < high; i++) {
        for (int j = i - 1; j >= low; j--) {
            if (array[i] < array [j]) {
                int holder = array[j];
                array[j] = array[i];
                array[i] = holder;
                i--;
            }
        }
    }
}
void merge (int *array, int *sub, int low, int mid, int high) {
    //Merge part of mergesort
    int a = low;
    int b = low;
    int c = mid;
 
    while ((a < mid) && (c < high)) {
        if (array[a] <= array[c]) {
            sub[b] = array[a];
            a++;
        } else {
            sub[b] = array[c];
            c++;
        }
        b++;
    }
    while (a == mid && c < high) {
        sub[b] = array[c];
        c++;
        b++;
    }
    while (c == high && a < mid) {
        sub[b] = array[a];
        a++;
        b++;
    }
    for (int d = low; d < high; d++) {
        array[d] = sub[d];
    }
}
void split (int *array, int *sub, int low, int high) {
    if (low < high - 1) {
        int mid = (low + high) / 2;
        split(array, sub, low, mid);
        split(array, sub, mid, high);
        if ((high - low) > 10){
            cout<<"Using Merge Sort"<<endl;
            merge(array, sub, low, mid, high);
        } else {
            cout<<"Using Insertions Sort"<<endl;
            Isort(array, low, high);
        }
 
    }
}
 
int main()
{
    int size;
    cout << "Enter Size"<<endl;
    cin >> size;
    int array[size];
    int sub[size];
    cout << "Enter Elements"<<endl;
    for (int i = 0; i < size; ++i) {
    	cin >> array[i];
    }
    
    split(array, sub, 0, size);
	cout << "After Sorting: "<<endl;
    for (int i = 0; i < size; i++) {
        cout << array[i]<< " ";
    }
    cout<<endl;
    return 0;
 
}