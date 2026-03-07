<h1 align="center">Data Structures and Algorithm</h1>
<h1 align="center">Introduction</h1><br>

<h1 align="center">What are Data Structures?</h1>

<h2>Data</h2>
<p>
Data is information that has been translated or converted into binary digital form
so that it can be efficiently processed or moved in computing systems.
</p>

<p>
The term <strong>raw data</strong> refers to data in its most basic and unprocessed form.
</p><br>

<h1 align="center">Why Do We Need Data Structures?</h1>

<ul>
<li>Each data structure allows data to be stored differently.</li>
<li>It enables efficient data search and retrieval.</li>
<li>Specific data structures are chosen to solve specific problems.</li>
<li>DS enables the management of  large amounts of data such as large databases and indexing services like hash tables.</li>
</ul>

<h2><b>Examples</b></h2>

<h3>Linked List Data Structure</h3>
<p>
If we have a playlist with three songs, the second song plays after the first,
and the third song plays after the second because all songs are linked as nodes in a linked list.
</p>

<h3>Stack Data Structure</h3>
<p>
In a stack of books, we must remove the topmost book before accessing the desired book.
To add a new book, we place it on the top.
It follows the <strong>LIFO (Last In, First Out)</strong> principle.
</p>

<h3>Queue Data Structure</h3>
<p>
Any traditional queue follows the <strong>FIFO (First In, First Out)</strong> principle.
The first element inserted is the first one removed.
</p>

<h3>Graph Data Structure</h3>
<p>
Google Maps works like a graph where locations are connected and multiple paths exist.
Algorithms can be used to find the shortest path.
</p>

<h3>Array Data Structure</h3>
<p>
If searching for the word “simplilearn” in a dictionary, we look under the letter “s”.
Arrays allow indexed and ordered access.
</p>

<h1 align="center">Types of Data Structures</h1><br>

<h2>1. Linear Data Structure</h2>
<p>
Elements are arranged sequentially one after another.
They are simple to implement because the order is fixed.
</p>

<h3>Array Data Structure</h3>
<ul>
<li>Elements are stored in continuous memory locations.</li>
<li>All elements are of the same data type.</li>
<li>The data type is predefined by the program.</li>
</ul>

<pre>
┌─┐ ┌─┐ ┌─┐
│4│ │8│ │2│
└─┘ └─┘ └─┘
 0   1   2
</pre>

<h3>Linked List Data Structure</h3>
<ul>
<li>Data elements are connected using nodes.</li>
<li>Each node contains data and the address of the next node.</li>
</ul>

<pre>
┌─┬─┐        ┌─┬─┐
│8│ │        │ │ │
└─┴─┘        └─┴─┘
(Head)      (Null)
</pre>

<h3>Stack Data Structure</h3>
<ul>
<li>Follows LIFO (Last In, First Out) principle.</li>
<li>Operations occur at one end called the top.</li>
</ul>

<pre>
         Push ↘      ↗  Pop 
                ┌─┐
    Top →       │5│
                └─┘
                ┌─┐
                │7│
                └─┘
                ┌─┐
                │4│
                └─┘
</pre>

<h3>Queue Data Structure</h3>
<ul>
<li>Follows FIFO (First In, First Out) principle.</li>
<li>Insertion and deletion occur at opposite ends.</li>
</ul><br>

<pre>
    Insertion ↘
                ┌─┐ ┌─┐ ┌─┐
                │5│ │7│ │4│
                └─┘ └─┘ └─┘
                            ↖ Deletion
</pre>

<h2>2. Non-Linear Data Structures</h2>
<p>
Elements are not arranged sequentially.
They are organized hierarchically or interconnected.
</p>

<h3>Tree Data Structure</h3>
<ul>
<li>The top node is called the <strong>root</strong>.</li>
<li>Each node can have zero or more children.</li>
<li>Nodes with no children are called <strong>leaves</strong>.</li>
<li>Each child has exactly one parent except the root.</li>
</ul>

<pre>
             →
        (8)──────(5)
         │        │
      ↓  │        │ ↑      [8 ↘ 9]
         │        │
        (2)──────(9)
             →
</pre>

<h3>Graph Data Structure</h3>
<ul>
<li>Consists of nodes (vertices) and edges.</li>
<li>Can be directed or undirected.</li>
<li>Can be weighted or unweighted.</li>
<li>Can be cyclic or acyclic.</li>
<li>Can be connected or disconnected.</li>
</ul><br>

<pre>
             (9)
        ↙   /   \   ↘
           /     \
        (6)      (5)
</pre>

<h1 align="center">Importance</h1>

<ul>
<li>Widely used in almost every aspect of computer science.</li>
<li>Used in AI, graphics, big data, and operating systems.</li>
<li>Essential component of algorithms.</li>
<li>Proper selection improves program efficiency.</li>
</ul><br>

<h1 align="center">Time Complexity</h1>

<p>
Time Complexity is the amount of time an algorithm takes to run as a function of input size.
The length of the input determines how many operations the algorithms will do.<br>
It will provide information about the variance ( increase or decrease) in execution time as the no. of operations in an algorithm increases or decreases.
</p>

<h2 align="center">Types of Time Complexity</h2>

<h2>1. Constant Time — O(1)</h4>
<p><i>Execution time does not depend on input size.</i><br>
When an algorithm is not reliant on the input sixe n, it is said to have constant time with order 0(1).<br>
The run time will always be same regardless of input size (n)</p><br>

<pre>
main()
{
    int a;
    print ("Enter value of a = ");
    scanf("%d", &a);
    printf("a = %d", a);
}

</pre>

<h2>2. Linear Time — O(n)</h2>
<p><i>Execution time increases linearly with input size.</i><br>
When running time of an algorithm rises linearly with the length of the inpu, it is said to have linear time complexity.
</p><br>

<pre>
main(){
    int a [5] = {2,3,5,7,9};
    printf("elements of a = \n");
    for(int i = 0; i<5; i++>);
    printf("a= %D", a);

}

<b>Note:</b><i>When a function checks all the values in an input data set,<br> it is said to have Time complexity of order 0(n)</i>
</pre>

<h2>3. Logarithmic Time — O(log n)</h2>
<p><i>Input size is reduced in each step. Example: Binary Search.</i><br>
Whena an algorithm lowers the amount of the input data in each step, it is said to have a logarithmic time complexity.<br>
Binary trees and binary search functions are same of the algorithm with lagarithmic time complexity.</p><br>

<pre>
int binary Search (int arr[], int 1, int r, int x){

    if(r>i){
        int mid = 1 +(r-1)/2;
        if arr[mid] == x);
        return mid;

        if (arr[mid] > x);
        return binary search (arr, 1mid -1,x);
        return binary search(arr, mid +1,r,x);
    }
}
</pre>

<h2>4. Quadratic Time — O(n²)</h2>
<p><i>Execution time grows non-linearly, commonly seen in nested loops.</i><br>
When the execution time of an algorithm rises non-lineaerly (n square) with thelength of the input, it is said to have a quadratic time complexity.<br>
In general, nested loops fall into the quadratic time complexity order, ewhere one loop takes 0(n) and if the function contains  loops inside loops, it takes<br>
0(n) * 0(n) = 0(n square)
</p><br>

<pre>
for (int i = 0; i<n; i++>);
{
    for (int j=0; j<n;j++>);
    { 
        printf("%d", arr[i][j])'
    }
}

</pre>

<h2 align="center">How to Evaluate Time Complexity</h2>

<pre>
    int fib (int n)
    {
        
        int f[n+2];                         +1
        int i;                              +1
        f[0]= 0;                            +1
        f[1]= 1;                            +1


        for (i =2; i<=n; i++ );
        {
            f[1] = f[i-1] + f[i-2];         +n
                                         
        }


        return f[n];                         +1



    }
</pre><br>

<pre>
Total time taken = n + 5
Total complexity = O(n + 5)
                = O(n)
</pre><br>

<h2 align="center">Time Complexity of Algorithms</h2><br>

<table align="center">
<tr>
<th>Algorithm</th>
<th>Best Case</th>
<th>Worst Case</th>
</tr>

<tr>
<td>Insertion Sort</td>
<td>O(n)</td>
<td>O(n²)</td>
</tr>

<tr>
<td>Merge Sort</td>
<td>O(n log n)</td>
<td>O(n log n)</td>
</tr>

<tr>
<td>Quick Sort</td>
<td>O(n log n)</td>
<td>O(n²)</td>
</tr>

<tr>
<td>Bubble Sort</td>
<td>O(n)</td>
<td>O(n²)</td>
</tr>

<tr>
<td>Linear Search</td>
<td>O(1)</td>
<td>O(n)</td>
</tr>

<tr>
<td>Binary Search</td>
<td>O(1)</td>
<td>O(log n)</td>
</tr>

</table><br>
<h2>1. Insertion Sort</h2>

<pre> void insertion sort (int arr[], int n)
{
    int i, key, j;
    for (i=1; i<n; i++>){
        key = arr[i];
        j=i=1;
    while(j>=0 && arr [j] > key){
        arr [j + 1] = arr[j];
        j=j-1;}
    arr [j + 1] = key;

    }

}   
    
</pre>



<h1 align="center">Conclusion</h1>

<ul>
<li>The time of the execution increases with the type of operations we make using the inputs.</li><br>
<li>The lesser the time complexity, the faster the execution.</li><br>
<li>In case if a code is 1000s of lines then it takes a toll on processor of the PC. So, it is important to check and reduce the time complexity as we can.</li>
</ul>


