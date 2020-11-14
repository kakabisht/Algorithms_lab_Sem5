#include<stdio.h>
#include<iostream>

using namespace std;

int max(int a, int b) { return (a > b)? a : b; }
 
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int x[n];
    int K[n+1][W+1];
    
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i==0 || w==0){
                 K[i][w] = 0;
            }
            else if (wt[i-1] <= w){
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
            }
            else{
                 K[i][w] = K[i-1][w];
            }
        }
    }
    int res = K[n][W];     
    w = W;
    cout<<"Items taken are \n"; 
    for (i = n; i > 0 && res > 0; i--) { 
        if (res == K[i - 1][w])  
            continue;         
        else { 
            cout<<wt[i - 1]<<" ";   
             
            res = res - val[i - 1]; 
            w = w - wt[i - 1]; 
        } 
    } 
    cout<<"\nMaximum profit is:"<< K[n][W]<<endl;
}
 
int main()
{
    int i, n, val[20], wt[20], W;
    
    cout<<"\nEnter the no. of objects: ";
    cin>>n;
    
    cout<<"\nEnter the wts and profits of each object:\n";
    for(i = 0;i < n; ++i){
    	cin>>val[i]>>wt[i];
    }
 
    cout<<"\nEnter the capacity of knapsack: ";
    cin>>W;
    
    knapSack(W, wt, val, n);
    return 0;
}