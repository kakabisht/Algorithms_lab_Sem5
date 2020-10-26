#include<stdio.h>
#include<iostream>
#define MAX 10

using namespace std;

void display(int matrix[MAX][MAX], int n);
int adj[MAX][MAX];
void create_graph();

int main()
{
        int i,j,k;
        int V;
        int P[MAX][MAX];

        cout<<"\nEnter number of vertices : ";
        cin>>V;
        int max_edges = V*(V-1);
        cout<<"\n Enter The adjacency matrix :\n";

        for( i=0; i<V; i++ ){
            for( j=0; j<V; j++ ){
                cin>>adj[i][j];
            }

        }
        
        cout<<"\n The adjacency matrix :\n";
        display(adj,V);

        for(i=0; i<V; i++){
            for(j=0; j<V; j++)
            {
                P[i][j] = adj[i][j];
            }
        }
           

        for(k=0; k<V; k++)
        {
                for(i=0; i<V; i++){
                    for(j=0; j<V; j++){
                        P[i][j] = ( P[i][j] || ( P[i][k] && P[k][j] ) );
                    }
                }      
                cout<<"\nP"<<k<<"is :\n";
                display(P,V);
        }
        cout<<"\nP "<<k-1<<" is the path matrix of the given graph\n";
}

void display(int matrix[MAX][MAX],int n)
{
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << matrix[i][j] << "   ";
            }
            cout << endl;
        }
}
