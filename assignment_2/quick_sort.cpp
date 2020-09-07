#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int partition2(vector<int> &a, int l, int r) {
    int x = a[l];
    int j = l;
    for (int i = l + 1; i <= r; i++) {
      if (a[i] <= x) {
        j++;
        swap(a[i], a[j]);
      }
    }
    swap(a[l], a[j]);
    return j;
}

vector<int> quick_sort_partition3(vector<int> &a, int l, int r) {
    int x = a[l];
    int p_l = l;
    int i = l;
    int p_e = r;
    vector<int> m(2);
    while (i <= p_e) {
        if (a[i] < x) {
            swap(a[p_l], a[i]);
            p_l++;
            i++;
        } else if (a[i] == x) {
            i++;
        } else {
            swap(a[i], a[p_e]);
            p_e -= 1;
        }
        m[0] = p_l;
        m[1] = p_e;
    }
    return m;
}


void randomized_quick_sort(vector<int> &a, int l, int r) {
    if (l >= r) {
      return;
    }

    int k = l + rand() % (r - l + 1);
    swap(a[l], a[k]);
    vector<int> m = quick_sort_partition3(a, l, r);
    for (int i = 0; i < a.size(); ++i) {
      cout << a[i] << ' ';
    }
    cout<<endl;
    randomized_quick_sort(a, l, m[0] - 1);
    randomized_quick_sort(a, m[1] + 1, r);
    
}

int main() {
    int n;
    cout<<"enter size"<<endl;
    std::cin >> n;
    vector<int> a(n);
    cout<<"enter Elements"<<endl;
    for (int i = 0; i < a.size(); ++i) {
      cin >> a[i];
    }
    randomized_quick_sort(a, 0, a.size() - 1);
    cout<<"After Sorting"<<endl;
    for (int i = 0; i < a.size(); ++i) {
      cout << a[i] << ' ';
    }
    cout<<endl;
    return 0;
}
