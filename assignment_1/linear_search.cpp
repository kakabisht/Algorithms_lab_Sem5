#include<iostream>
#include <vector> 
using namespace std; 

int lin_search(vector<int> a, int val)
// This function just searches the element in linear order
{
    for(int i=0; i<a.size();i++)
    {
        if (val == a[i])
            return i;
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
    int result = lin_search(a,val); 
    (result == -1) ? cout << "Element is not present in array": cout << "Element is present at index " << result; 
    cout<<endl;
}