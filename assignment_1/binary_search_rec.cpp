#include<iostream>
#include<vector>
using namespace std; 

int bin_search(vector<int> a,int l, int r, int val)
// Finding an element in a vector using Recursive approach
{
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (a[m] == val) 
            return m; 
  
        if (a[m] < val) 
        {
            l = m + 1; 
            return bin_search(a,l,r,val);
        }
  
        else
        {
            r = m - 1; 
            return bin_search(a,l,r,val);
        }
    } 
    return -1; 
}

int main(){
   int size,val;
    vector<int> a; 
    cout<<"enter size"<<endl;
    cin>>size;
    cout<<"enter elements"<<endl;
    for (int i = 0; i < size; i++) {
        int t=0;
        cin>>t;
        a.push_back(t); 
    }
    cout << "array is:"<<endl; 
    for (auto i = a.begin(); i != a.end(); ++i) 
        cout << *i << " "; 

    cout<<"value to find?"<<endl;
    cin>>val;
    int result = bin_search(a,0,size,val); 
    (result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result; 
    cout<<endl;
}