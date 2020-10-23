## Assignment 1 :
### WAP to search an element using linear search and binary search (recursive)

1.Linear Search:
    
Objectives: To find if an element exists in a vector or not

Pseudocode / Algorithm:

* Input size of the vector
* Input elements in the vector
* Input the value to be found 
* For I from 1 to the size of the vector
* Check if each element of the vector is equal to the value to be found
* If the element is found return the position
* Else return -1 

Output: 
Best case: element is at position 0
Worst case: element is not present
Average case: O(n)


2.Binary Search:

Objectives: To find if an element exists in a vector or not

Pseudocode / Algorithm:

* Input size of the vector
* Input elements in the vector
* Input the value to be found 
* For I from 1 to the size of the vector
* While start<=end
* Set mid =start+end /2
* If the value is equal to the middle element, then return the middle position
* If value > the middle element, set the lower limit= middle+1
* If value < the middle element, set the upper limit= middle-1
* If the element is found return the position
* Else return -1*

Output: 
Best case: element is at position size/2
Worst case: element is not present
Average case: log2 (n)

3.Binary Search Recursive:

Objectives: To find if an element exists in a vector or not

Pseudocode / Algorithm:

* Input size of the vector
* Input elements in the vector
* Input the value to be found 
* For I from 1 to the size of the vector
* While start<=end
* * Set mid =start+end /2
* * If the value is equal to the middle element, then return the middle position
* * If value > the middle element, return binary_search(mid+1,end,value)
* * If value < the middle element, return binary_search(start,mid-1,value)
* If the element is found return the position
* Else return -1 
 
Output: 
Best case: element is at position size/2
Worst case: element is not present
Average case: log2 (n)
 
## Assignment - 2
### WAP to perform Quick sort, Merge sort.

1.Merge Sort:

Objectives: To use a merge sort algorithm to sort an array.

Pseudocode / Algorithm:

* Input size of the vector
* Input elements in the vector
* Input the value to be found 
* If low < high 
    * Set Mid =(low+high)/2
    * Divide the array into smaller sizes
    * One from low to middle
    * Another one from middle to high
    * We then compare these smaller sized components to sort and merge them
* We Display the sorted array 

Output: 
Best case: O(n log (n))
Worst case: O(n log (n))
Average case: O(n log (n))
 


2.Enhanced Merge Sort

[Research paper referenced](http://www.ijcsms.com/journals/Volume%2013,%20Issue%2005,%20July%202013_deeptigrover%20research%20paper.pdf)

Objectives: To use an enhanced merge sort algorithm to sort an array.

### Although merge sort is O(n log n) and insertion sort is O(n2), insertion sort has better constants and is thus faster on very small arrays.

Pseudocode / Algorithm:

* Input size of the vector
* Input elements in the vector
* Input the value to be found 
* If low < high 
    * Set Mid =(low+high)/2
    * Divide the array into smaller sizes
    * One from low to middle
    * Another one from middle to high
    * If high -low <= 10 
        * We use insertion sort to optimize the algorithm
    * Else
        * We use merge sort to compare these smaller sized components to sort and merge them
* We Display the sorted array 
 
Output: 
Best case: O(n )
Worst case: O(n log (n))
Average case: O(n log (n))



3.Quick Sort:

Objectives: To use a quick sort algorithm to sort an array.

Pseudocode / Algorithm:

* Input size of the vector
* Input elements in the vector
* Input the value to be found 
* Selecting a pivot element 
    * Moving the elements smaller than pivot to left
    * Moving the elements greater than pivot to left
    * Moving the elements equal to the pivot together with pivot
* We Display the sorted array 
  
 
Output: 
Best case: O(n log (n))
Worst case: O(n log (n))
Average case: O(n *n)

## Assignment - 3
### WAP to perform Prim and Kruskal Algorithms.

1.Prim Algorithm

*   Begin
*   Create an edge list of given graph, with their weights.
*   Draw all nodes to create a skeleton for the spanning tree.
*   Select an edge with lowest weight and add it to the skeleton and delete edge from edge list.
*   Add other edges. While adding an edge take care that the one end of the edge should always be in the skeleton tree and its cost should be minimum.
*   Repeat step 5 until n-1 edges are added.
*   Return.

Output:
 Since we are using an Adjacency Matrix for storing edges, hence time complexity     will  O(|V|2). 

2.Kruskal Algorithm

*   Begin
*   Create the edge list of the given graph, with their weights.
*   Sort the edge list according to their weights in ascending order.
*   Draw all the nodes to create a skeleton for the spanning tree.
*   Pick up the edge at the top of the edge list (i.e. edge with    minimum weight).
*   Remove this edge from the edge list.
*   Connect the vertices in the skeleton with the given edge. If by connecting the vertices, a cycle is created in the skeleton, then discard this edge.
*   Repeat steps 5 to 7, until n-1 edges are added or the list of edges is over.
*   Return

Output:
Let us assume a graph with e number of edges and n number of vertices. Kruskal’s algorithm starts with sorting edges.
*   Time complexity of sorting algorithm= O (e log e)
*   Time complexity of merging of components= O (e log n)

Overall time complexity of the algorithm= O (e log e) + O (e log n)

## Assignment - 4
### WAP to perform Dijkstra Algorithms.

Dijkstra Algorithm:
*   Start with the empty Shortest Path Tree (SPT).
*   Maintain a set SPT[] to keep track to vertices included in SPT.
*   Assign a distance value to all the vertices, (say distance []) and initialize all the distances with +∞ (Infinity) except the source vertex. This will be used to keep track of the distance of vertices *from the source vertex. The distance of source vertex to source *vertex will be 0.
*   Repeat the following steps until all vertices are processed.
    *   Pick the vertex u which is not in SPT[] and has minimum distance. Here we will loop through the vertices and find the vertex with minimum distance.
    *   Add vertex u to SPT[].
    *   Loop over all the adjacent vertices of
    *   For adjacent vertex v, if v is not in SPT[] and distance[v] > distance[u] + edge u-v weight then update distance[v] = distance[u] + edge u-v weight
 
Time Complexity: O(|V|2), since we are using a matrix for storing data.




