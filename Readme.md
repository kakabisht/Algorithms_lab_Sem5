## Assignment 1 :
### WAP to search an element using linear search and binary search (recursive)

1.Linear Search:
    
Objectives: To find if an element exists in a vector or not

Output: 
Best case: element is at position 0
Worst case: element is not present
Average case: O(n)

2.Binary Search:

Objectives: To find if an element exists in a vector or not

Output: 
Best case: element is at position size/2
Worst case: element is not present
Average case: log2 (n)

3.Binary Search Recursive:

Objectives: To find if an element exists in a vector or not
 
Output: 
Best case: element is at position size/2
Worst case: element is not present
Average case: log2 (n)
 
## Assignment - 2
### WAP to perform Quick sort, Merge sort.

1.Merge Sort:

Objectives: To use a merge sort algorithm to sort an array.

Output: 
Best case: O(n log (n))
Worst case: O(n log (n))
Average case: O(n log (n))
 


2.Enhanced Merge Sort

[Research paper referenced](http://www.ijcsms.com/journals/Volume%2013,%20Issue%2005,%20July%202013_deeptigrover%20research%20paper.pdf)

Objectives: To use an enhanced merge sort algorithm to sort an array.

### Although merge sort is O(n log n) and insertion sort is O(n2), insertion sort has better constants and is thus faster on very small arrays.
 
Output: 
Best case: O(n )
Worst case: O(n log (n))
Average case: O(n log (n))

3.Quick Sort:

Objectives: To use a quick sort algorithm to sort an array.
   
Output: 
Best case: O(n log (n))
Worst case: O(n log (n))
Average case: O(n *n)

## Assignment - 3
### WAP to perform Prim and Kruskal Algorithms.

1.Prim Algorithm

Output:
 Since we are using an Adjacency Matrix for storing edges, hence time complexity will  O(|V|2). 

2.Kruskal Algorithm

Output:
Let us assume a graph with e number of edges and n number of vertices. Kruskal’s algorithm starts with sorting edges.
*   Time complexity of sorting algorithm= O (e log e)
*   Time complexity of merging of components= O (e log n)

Overall time complexity of the algorithm= O (e log e) + O (e log n)

## Assignment - 4
### WAP to perform Dijkstra Algorithms.

Dijkstra Algorithm:

Output: 
Time Complexity: O(|V|2), since we are using a matrix for storing data.

## Assignment - 6
### WAP to perform Floyd–Warshall Algorithm.

Output:
*   Time Complexity: The time complexity of the Floyd-Warshall algorithm is O(n3), as there are three for loops of size n.
*   Space Complexity: The space complexity of the Floyd-Warshall algorithm is O(n2).

## Assignment - 8
### WAP to perform N-Queen Algorithm.

Output:
*   Space complexity: For this algorithm it is O(N). 
*   Time complexityT(n) = n*T(n-1) + O(n^2) which translates to O(N!) time complexity approximately.







