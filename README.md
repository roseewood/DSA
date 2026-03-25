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
    
</pre><br>

<h2>2. Merge Sort</h2>
<pre>void merge sort (int array[], int const begin, int const end)
{
    if (begin >= end)
    return; // Return recursivly

    auto mid = begin + (end - begin)/2;
    merge sort (array, begin, mid);
    merge sort (array, mid + 1, end);
    merge sort array, mid, begin, end;
}
</pre><br>

<h2>3. Quick Sort</h2>

<pre>
void quicksort (int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition (arr, low, high);
        //seprately sor elements before
        //partition and after partition
        quicksort (arr, low, pi, 1);
        quicksort (arr, pi + 1, high);
    }
}
</pre><br>

<h2>4. Bubble Sort</h2>

<pre>
void bubble sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i ++);
    //last i elements are already place

    for(j = 0; j < n -i - 1; j ++>);
    if(arr [j]> arr[j + 1]);
    swap(&arr [j], & arr[j+1]);
}
</pre><br>

<h2>5.Linear Search </h2>

<pre>
int search (int arr [], int n, int x)
{
    int i;
    for (i=0; i<n; i++>);
    if (arr [i] == x);
    return i;
    return -1;
}
</pre><br>

<h2>6. Binary Search</h2>
<pre>
    int binary Search (int arr[], int 1, int r, int x)

    if (r >=1){;
    if (arr [mid] == x)
        int mid = 1 + (r-1)/2;

    if (arr [mid] == x)
        return mid;
    if (arr[mid]>x)
        return binary search (arr, 1, mid-1, x);
        return binary search (arr, mid +1, r, x);
    }

</pre><br>

<h1 align="center">Conclusion</h1>

<ul>
<li>The time of the execution increases with the type of operations we make using the inputs.</li><br>
<li>The lesser the time complexity, the faster the execution.</li><br>
<li>In case if a code is 1000s of lines then it takes a toll on processor of the PC. So, it is important to check and reduce the time complexity as we can.</li>
</ul><br>

<h1 align="center">Pointers in C</h1>

<p>A pointer is a variable to the address of another variable . If is declared along wiht an asterisk symbol (*).<br>
The syntax to declare a pointer is as follows:<br></p>

<p align="center"><b>datatype * var 1</b></p>

<p>The syntax to Assign address of a variable to a pointer is:</p>

<p align="center"><b>datatype var1, * var2</b></p><br>

<pre>
# include <bits/std c++.h>
using namespace std;
main()
{
    int a = 5, * ptr;
    ptr = &a;
    cout << "a =" << a << endl;
    cout << "a =" << * ptr << endl;
    return 0;
}
</pre>

<p><b>Result</b><br>
a = 5<br>
a = 5</p><br>

<h1 align="center">Types of Pointer</h1>

<h2>1. Null Pointer</h2>
<p>When a null value is assigned to a pointer during its declaration.</p><br>

<pre>
int *var = NULL;

# include <bits/stdc++.h>
using namespace std;
main()
{
    int *var;
    *var = NULL;
    cout<< *var;
    return 0;
}

<b>Result:</b>

---------------
</pre><br>

<h2>2. Void Pointer</h2>
<p>When a pointer is declared with a void keyword.<br>
To print the value we need to typecast this pointer.</p>

<p><b>Syntax:</b></p>
<p align="center"><i>void *var;</i></p><br>

<pre>

#include <bits/stdc++.h>
using namespace std;
main()
{
    int a = 5;
    void *ptr;
    ptr = &a;
+------------------+
|   cout << *ptr;  |   -------> ERROR
+------------------+
    |  return 0;
    |
    |
    |
    |
}   |
    |
    |
    |
<b>Result: </b>

cout<< *(int *) ptr;
= 5
 
</pre><br>

<h2>3. Wild Pointer</h2>
<p>It is only declared but not assigned an address of any variable. <br>
These pointers are very tricky and they may cause segmenatation errors.</p><br>

<pre>
#include <bits/stdc++.h>
sung namespace std;
main()
{
    int *ptr;
    cout<< *ptr;
    return 0;
}


<b>Result:</b>

---------------

</pre><br>

<h2>4. Dangling Pointer</h2>
<p>Let's suppose there is a pointer p pointing at a variable at memory 10004. This pointer will point at a deleted variable if we dellocate this memory. <br>
We deallocate memory using a free () function.</p><br>

<pre>
#include <bits/stdc++.h>
using namespace std;
main()
{
    int *ptr = (int *)m alloc(sizeof(int));
    int a = 5;
    ptr = &a;
    free (ptr);
    cout<< *ptr;
    return 0;
}

<b>Result:</b>
----------------
</pre><br>

<h1 align="center">Use Cases</h1>
<h2 align="center">1. Pointer Arithmetic</h2>
<p><b>NOTE:</b> Pointer Arithemetic is of no use if not used in Arrays.</p>

<h2>i) Increment (++)</h2>
<p>We can use this operator to jump from one index to the next insex in an array.</p>

<b>Syntax:</b>
<p align="center">ptr++</p>

<p align="center">arr[0] -------------> arr[1]-----------> arr[2]     
</p>

<pre>
#include <bits/stdc++.h>
using namespace.std;
main()
{
    int arr [3] = {2,3,5};
    int *tr;
    tr = &arr [0];
    for(int i = 0; i<3; i++)
    {
        cout <<* tr<< end l;
        ++;
    }
    return 0;
}


<b>Result:</b>
2, 3, 5
</pre><br>


<h2>ii) Decrement (--)</h2>
<p>We use this operator to jump from one index to the previous index in an array.</p><br>

<p><b>Syntax: </b></p>
<p align="center">ptr <sup> --</sup><br><br>
arr[2] ------------> arr[1] -------------> arr[0]</p><br>

<pre>
#include <bits/stdc++.h>;
using namespace std;
main()
{
    int arr[3] = {2,3,5}
    int *ptr;
    ptr = & arr[2];
    for (int i=0; i=3; i++)
        {cout << *ptr<< endl;
        ptr<sup>--</sup>;
    }
    return 0;
}

<b>Result:</b>
5, 3, 2
</pre><br>

<h2>iii) Integers added to a Pointer:</h2>
<p>We use this operator to jump from one index to the next index in an array.</p><br>

<p><b>Syntax: </b></p>
<p align="center">ptr + = i; <i>(where 'i' is an integer) </i> <br>
arr[0] ------------> arr[2] -------------> arr[4]</p><br>

<pre>
#include <bits/stdc++.h>;
using namespace std;
main()
{
    int arr[7] = {2,3,5,7,11,13,17}
    int *ptr;
    ptr = & arr[0];
    int n =2;
    for (int i=0; i<7>; i++)
        {cout << *ptr<< endl;
        ptr + n;
    }
    return 0;
}

<b>Result:</b>
2, 5, 11, 17, 2
</pre><br>

<h2>iv) Integers subtracted from a Pointer:</h2>
<p>We use this operator to jump from one index to the previous index in an array.</p><br>

<p><b>Syntax: </b></p>
<p align="center">ptr - = i; <i>(where 'i' is an integer) </i> <br>
arr[2] ------------> arr[2] -------------> arr[0]</p><br>

<pre>
#include <bits/stdc++.h>;
using namespace std;
main()
{
    int arr[7] = {2,3,5,7,11,13,17}
    int *ptr;
    ptr = & arr[6];
    int n =2;
    for (int i=0; i<7>; i++)
        {cout << *ptr<< endl;
        ptr - n;
    }
    return 0;
}

<b>Result:</b>
17, 11, 5, 2
</pre><br>


<h2>(v) Precedence</h2>
<ul>
<li>Operators <b>*</b> and <b>&</b> are given the same priorities as unary operators (increment <b>++</b>, decrement <b>--</b>)</li><br>

<li>The unary operators <b>*, &, ++, --</b> are ecaluated from right to left in the same expression.</li><br>

<li>If a <b>p</b> pointer points to and <i>X</i> variable, then we can interchange <i>X</i> with <b>*p</b>.</li>
</ul><br>

<table align ="center">
<tr>
<th>Expression</th>
<th>Equivalent Expression</th>
</tr>
<tr>
<td>Y = X + 1</td>
<td>Y = *p + 1</td>
</tr>
<tr>
<td>X = X + 10</td>
<td>*p = *p + 10</td>
</tr>
<tr>
<td>X + = 2</td>
<td>*p += 2</td>
</tr>
<tr>
<td>++X</td>
<td>++ *p</td>
</tr>
<tr>
<td>X ++</td>
<td>(*p) ++</td>
</tr>

</table><br>

<h2 align="center">2. Pointer to Pointer</h2>
<p>In this situation, a pointer will indirectly point to a variable via another pointer.</p><br>

<p><b>Syntax: </b></p>
<p align="center">int **ptr<br><br>
Pointer 2 ------------> Pointer 1-------------> Variable</p><br>

<pre>
#include <bits/stdc++.h>;
using namespace std;
main()
{
    int var, *ptr1, **ptr2;
    var 5;
    ptr1  = &var;
    ptr2 = &ptr1;
    cout << "var=" << var << endl << "ptr1=" <<*ptr1 << endl <<"ptr2=" <<**ptr2;
    }
    return 0;
}

<b>Result:</b>
var = 5
ptr1 = 5
**ptr = 25
</pre><br>


<h2 align="center">3. Array of Pointer</h2>
<p>An array of pointer is an array whose every element is a pointer.</p><br>

<p><b>Syntax: </b></p>
<p align="center">int * arr[n] (where n is size of array)<br><br>
ptr[0] ------------> ptr[1]-------------> ptr[2]<br>
a[0] ----------> a[1] ---------->a[2]</p>

<pre>
#include <bits/stdc++.h>;
using namespace std;
main()
{
    int a [3] = {2, 3, 5};
    int *ptr[3];
    for (int i=0; i<3; i++)
    {
        ptr[i] = &a [i];
    }
    for (int i = 0; i<3; i ++)
    {
    cout << *ptr [i] << endl;
    }
    return 0;
}

</pre><br>

<h2 align="center">4. Call by Value</h2>
<p>In call by value, we copy the variables values and pass it in function vall as a parameter. If we modify change the value of the actual variable.</p><br>

<p><b>Syntax: </b></p>
<p align="center">
Variable A ------------> Variable A (copy)<br><br>
Variable B ------------> Variable B (copy)</p>

<pre>
#include <bits/stdc++.h>;
using namespace std;
main()
{
   int X = 10;
   func (X);
   cout << X << endl;
   return 0;
}
{
    X = 200;
    cout << "X =" << X << endl;
    return 0;
}

</pre><br>

<h2 align="center">5. Call by Reference:</h2>
<p>In call by reference, we take the variables address and pass it in function called as a parameter.<br>
If we modify these parameters, then it will change the value of the actual variable as well.</p><br>

<p><b>Syntax: </b></p>
<p align="center">
Variable A ------------> (address) Variable A<br><br>
Variable B ------------> (address) Variable B </p><br>

<pre>
#include <bits/stdc++.h>;
using namespace std;
main()
{
   int X = 10;
   func (&X);
   cout << "X=" << endl;
   return 0;
}
    void func (int *X)
{
    X = 200;
    cout << "in func function X = " << X << endl;
    return 0;
}

</pre><br>

<h1 align="center">Advantages</h1>

<ul>
    <li>Pointers are helpful to access a memory location.</li><br>
    <li>Pointers are an effective way to access the array structure elements.</li><br>
    <li>Pointers are used for the allocation of dynamic memory and the distribution.</li><br>
    <li>Pointers are used to build complecated data structures like a linked list graph, tree etc.</li>
</ul><br>


<h1 align="center">Disadvantages</h1>

<ul>
    <li>Poointers are a bit difficult to understand.</li><br>
    <li>Pointers acan cause several errors, such as segmentation errors or unrequired memory access.</li><br>
    <li>If a pointer has an incorrect value, it may corrupt the memeory.</li><br>
    <li>Pointers may corrupt the memory.</li><br>
    <li>The pointers are relatively slower than the variables.
    </li >
</ul><br>


<h1 align="center">Key Points</h1>

<ul>
    <li>A pointer is simply a storage location for data in memory.</li><br>
    <li>Pointers can be used to traverse the array more efficiently.</li><br>
    <li>We can use function pointers to invoke a function dynamically.</li><br>
    <li>Pointer arithemetic is the process of performing arithmetic opearations on pointer.</li><br>
    <li>In an array of pointers, it can point to functions, making it simple to call different functions.</li>
</ul><br><br>


<h1 align="center">Arrays</h1>

<h2 align="center">Need of Arrays</h2>
<p>Ler us imagine that we were supposed keep track of the students marks and also honor them with degrees. If we done this in traditional ways of declaring individual variables for each student, then it would be time-consuming.</p><br>

<p><b>Example:-</b></p>
<p align="center"><b>Score:</b> 1 2 3 4 5<br>
<b>Student:</b> 1 2 3 4 5</p>

<p>So, what if there is an option where one variable could do the job of 'n' variables.<br>
So with a similar approach, the array data structure were designed
</p><br>

<h2>Arrays</h2>
<p>An array is a linear data structure that collects elements of same data type and stores them in a contiguous and adjavent memory locations.</p>

<h3 align="center">Memory Representation</h3>
<p>Let's create an array of five elements.</p>
<p align ="center">[ A ]&nbsp;&nbsp;&nbsp; [ R ] &nbsp;&nbsp;&nbsp; [ R ]&nbsp;&nbsp;&nbsp; [ A ]&nbsp;&nbsp;&nbsp; [ Y ]</p><br>

<p><b>Note:</b> The element in an array are stored using memory block address and <i>Array Index.</i>

<pre>
┌─────────┐  ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐
│ Address │→ │ 11 │ │ 12 │ │ 13 │ │ 14 │ │ 15 │
└─────────┘  └────┘ └────┘ └────┘ └────┘ └────┘
┌────────┐   ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐
│ Array  │→  │ A  │ │ R  │ │ R  │ │ A  │ │ Y  │
└────────┘   └────┘ └────┘ └────┘ └────┘ └────┘
┌─────────┐  ┌────┐ ┌────┐ ┌────┐ ┌────┐ ┌────┐
│ Index   │→ │ 01 │ │ 02 │ │ 03 │ │ 04 │ │ 05 │
└─────────┘  └────┘ └────┘ └────┘ └────┘ └────┘
</pre><br>

<h2 align="center">Types</h2>
<p><b>i) One Dinemsional Array<br>
ii) Multidimensional Array<br>
a) 2D &nbsp;&nbsp;&nbsp; b) 3D<br></b></p><br>

<h2>1. One Dimensional Array</h2>
<p>It requires only one subscript specify element in array.</p>

<p align="center"><b>int marks [10] =</b> {0, 1, 2, 3, 4, 5, 6, 7, 8,9}</p>
<p><b>Elements-</b> [ ] [ ] [ ]  [ ]  [ ]  [ ]  [ ] [ ] [ ] [ ]<br>
<b>Index-</b> 0  1  2  3 4 5 6 7 8 9</p><br>

<h2>2. Multdimensional Array</h2>
<p>It requires more than one subscript to specify the element in an arrays.</p>

<h3>a) 2D Arrays</h3>
<p>It is organised in the forn of matrix which can be represented as a collection of Rows and Columns.</p><br>

<p align="center"><b>int num [3] [3] =</b>{1,2,3}, {4,5,6}, {7,8,9}</p><br>

<pre>
              0   1   2
            ┌───┬───┬───┐
        0   │ 1 │ 2 │ 3 │
            ├───┼───┼───┤
        1   │ 4 │ 5 │ 6 │
            ├───┼───┼───┤
        2   │ 7 │ 8 │ 9 │
            └───┴───┴───┘
</pre><br>

<h3>b) 3D Arrays</h3>
<p>It is a collection of 2D arrays which consists of three subscripts- <b>Block size, Row size</b> and <b>Column size</b>.<br><br>

<p><b>int num [2] [3] [2] =</b></p>

<pre>


   num[row] [col][0]                  num[row] [col] [1]

      0   1   2                           0   1   2
    ┌───┬───┬───┐                       ┌───┬───┬───┐
 0  │   │   │   │                    0  │   │   │   │
    ├───┼───┼───┤                       ├───┼───┼───┤
 1  │   │   │   │                    1  │   │   │   │
    └───┴───┴───┘                       └───┴───┴───┘   

</pre><br>


<h2 align="center">Declearation of Arrays</h2>

<p align="center">Syntax: &nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; <b>datatype array_name[array_size];</b><br>

<b>For Example:-</b> <i> An array of integer can be declared as follows.</i>
</p>



<pre>

<p><b>int(example) [6];</b></p>

┌───┐   ┌───┐   ┌───┐   ┌───┐   ┌───┐   ┌───┐
│   │   │   │   │   │   │   │   │   │   │   │
└───┘   └───┘   └───┘   └───┘   └───┘   └───┘
  0       1       2       3       4       5
</pre><br>

<p>Compiler will allocate a contiguous memory block okf size = 6 * sizeof (int)</p><br>

<h2 align="center">Initialization of Arrays</h2>

<table align ="center">
<tr>
<td><b>Method 1</b></td>
<td>int a [5] = {1, 2,3,4,5};</td>
<td>a = [1][2][3][4][5]<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;1 &nbsp;2 &nbsp;3 &nbsp;4</td>
</tr>


<tr>
<td><b>Method 2</b></td>
<td>int a [ ] = {1,2,3,4,5};</td>
<td>a = [1][2][3][4][5]<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;1 &nbsp;2 &nbsp;3 &nbsp;4</td>
</tr>

<tr>
<td><b>Method 3</b></td>
<td>int a [5];<br>
a [0] = 1;<br>
a [1] = 2;<br>
a [2] = 3;<br>
a [3] = 4;<br>
a [4] = 5;<br>
</td>
<td>a = [1][2][3][4][5]<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;1 &nbsp;2 &nbsp;3 &nbsp;4</td>
</tr>

<tr>
<td><b>Method 4</b></td>
<td>int a [5]<br>
for( i = 0; i < 5; i ++>)<br>
    {scanf ("%d", a[i]);<br>
}
</td>
<td>a = [1][2][3][4][5]<br> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;0 &nbsp;1 &nbsp;2 &nbsp;3 &nbsp;4</td>
</tr>

</table><br>

<h2 align="center">Accessing Elements of Array</h2>

<p><b>To access an array elements:</b>&nbsp;&nbsp;&nbsp;name_of_array[sizeofarray];</p>


<pre>

<b>int xyz[5];</b>

┌───┐  ┌───┐  ┌───┐  ┌───┐  ┌───┐   
└───┘  └───┘  └───┘  └───┘  └───┘   
  0      1      2      3      4
</pre><br>

<ul>
<li>Accessing the first element in an array can be done using the first index.<br>
<b>e.g. xyz [0]</b></li>
<li>Accessing the second element in an array can be done using the second index.<br>
<b>e.g. xyz [1]</b> and so on.</li>

</ul><br>

<h1 align="center">Operation on Array Elements</h1>

<h2>Traversal</h2><br>
<ul>
<li>Traversal in an array is a process of visiting each elements once.</li>
<li>It can be done by various means.</li>
</ul>
<p>
<b>i)</b> Counting the array elements.<br>
<b>ii)</b> Printing the values stored in an arrays.<br>
<b>iii)</b> Sum of elements present in an arrays and many more.<br>
</p><br>

<pre>

  ↓       ↓       ↓       ↓       ↓
┌───┐   ┌───┐   ┌───┐   ┌───┐   ┌───┐  
│10 │   │20 │   │30 │   │40 │   │50 │  
└───┘   └───┘   └───┘   └───┘   └───┘  

</pre><br>

<h2>Insertion</h2><br>
<ul>
<li>Insertion in an array is the process of including one or more elements in an array</li>
<li>Insertion of elements can be done:</li>
</ul><br>
<p>
<b>i)</b> At the begining,<br>
<b>ii)</b> At the end, and<br>
<b>iii)</b> At any given index of an Array
</p><br>

<pre>

┌───┐   ┌───┐   ┌───┐   ┌───┐   ┌───┐  ┌───┐                  
│10 │   │20 │   │30 │   │50 │   │60 │  |   |
└───┘   └───┘   └───┘   └───┘   └───┘  └───┘     
                          |____↗  |____↗        

                ┌───┐
                |40 |
                └───┘
</pre><br>

<h2>Deletion</h2><br>
<ul>
<li>Deletion of an element is the process of removing the desired elements and re-organize it. </li>
<li>Deletion of elements can be done by different way:</li>
</ul><br>
<p>
<b>i)</b> From the begining,<br>
<b>ii)</b> From the end, and<br>
<b>iii)</b> From any given index
</p><br>

<h2>Searching</h2><br>
<ul>
<li>It is the process of finding a given value in a list of values.</li>
<li>It decides whether the search key is  present is an array or not.</li>
<li>It is an algorithmic process of finding a particular item in collection of data.</li>
</ul><br>

<pre>

   0     1     2     3     4
┌─────┬─────┬─────┬─────┬─────┐
│ 10  │ 20  │ 30  │ 40  │ 50  │
└─────┴─────┴─────┴─────┴─────┘
   ↑ 
┌─────┬─────┬─────┬─────┬─────┐
│ 10  │ 20  │ 30  │ 40  │ 50  │
└─────┴─────┴─────┴─────┴─────┘
         ↑ 
┌─────┬─────┬─────┬─────┬─────┐
│ 10  │ 20  │ 30  │ 40  │ 50  │
└─────┴─────┴─────┴─────┴─────┘
               ↑ 

</pre><br>

<h2>Sorting</h2><br>
<ul>
<li>It is the process in which element sorted in a user defined order.<br>
<b>For Ex-</b> <i> Numerical, Alphabetical etc.</i></li>
<li>This process is done in ascending order.</li>
</ul><br>

<pre>
                    ┌────┐                  ┌────┐
                    │ 30 │                  │ 10 │
                    ├────┤                  ├────┤
                    │ 10 │                  │ 20 │
                    ├────┤                  ├────┤
 Before             │ 50 │      ------>     │ 30 │    After
 Sorting            ├────┤                  ├────┤   Sorting
                    │ 20 │                  │ 40 │
                    ├────┤                  ├────┤
                    │ 40 │                  │ 50 │
                    └────┘                  └────┘
</pre>



<h1 align="center">Advantages</h1>

<ul>
<li>Arrays stores multiple elemlents of same type with the same name.</li>
<li> Elements in an array can access randomly using an index number.</li>
<li>Array memory is predefined, so there is no extra memory loss.</li>
<li>They avoid memory loss.</li>
<li>2D arrays can represent the tabular data.</li>
</ul>
<br>

<h1 align="center">Disadvantages</h1>

<ul>
<li>The no. of elements in an array should be pre-defined.</li>
<li>It is static in nature , it's size cannot be varied after declaration.</li>
<li>Allocating excess memory than required may lead to memory wastage.</li>
<li>Insertion and deletion opearation in an array is quite difficult as array stores elements in contuous form.</li>

</ul><br>

<h1>Two Dimensional Arrays</h1>

<ul>
<li>These array are called arrays of arrays.</li>
<li>It is created to execute relational database which is like data structure.</li>
<li>These arrays organised as matrices which are the colleection of rows and columns.</li>
<li>It consists rows and columns.</li>
</ul>

<h3 align="center">Need of 2-D Arrays</h3>
<ul>
<li>The main advantage of this is grouping of elements.</li></ul>
<p><b>For Example: </b> Consider we have a class consisting four students-
Each student consists of three subjejctjs namely <i>English, Science, and Mathematics</i>.And we want to represent marks of each student.</p><br>

<pre>
                    Students
                  1   2   3   4
                ┌───┬───┬───┬───┐
    English     │70 │90 │80 │75 │
                ├───┼───┼───┼───┤
    Science     │65 │75 │60 │55 │
                ├───┼───┼───┼───┤
    Maths       │50 │65 │75 │80 │
                └───┴───┴───┴───┘

<i>So, the above table represents whole class marks.</i>
</pre><br>

<h3>Syntax:</h3>

<p align="center"><b> data_type name_of_array[R][C];</b><br> 
<i>R → No. of Rows, C → No. of Columns</i>
</p>
<p><b>Note:</b> <i>Columns should not be empty.</i><br>

<b>e.g</b>
</p>
<p align="center">
float arr [ 3 ] [ 4 ];<br>
char names [ 7 ] [ 15 ];
</p><br>

<h2 align="center">Visualizing</h2>
<p>I tis a collection of rows and columns.</p>

<pre>
<p align="center"><b>int array[6][4];</b></p>

      ↓ Columns
        ┌──────────┬──────────┬──────────┬──────────┬──────────┬──────────┐ 
        │          │          │          │          │          │          │
        ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
        │          │          │          │          │          │          │
        ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
        │          │          │          │          │          │          │
        ├──────────┼──────────┼──────────┼──────────┼──────────┼──────────┤
        │          │          │          │          │          │          │
        └──────────┴──────────┴──────────┴──────────┴──────────┴──────────┘
      --→ Rows         


<p><b>Note:</b> <i>This 2-D Array consist 6 no. of rows and 4 no. of columns.</i></p>
<p align="center"><b>Total 6 * 4 = 24</b></p>
</pre><br>

<h2 align="center"> Initialization</h2>

<h3>1. First Method</h3>

<pre>
<p align="center"><b>int first[2][2]= {9,6,1,144,70,50,10,12,78};</b></p>


                                  Column Index ↘     
           0       1       2                      0       1       2
      ┌────────┬────────┬────────┐           ┌────────┬────────┬────────┐
  0   │   9    │   6    │   1    │       0   │ (0,0)  │ (0,1)  │ (0,2)  │
      ├────────┼────────┼────────┤           ├────────┼────────┼────────┤
  1   │  114   │   70   │   50   │       1   │ (1,0)  │ (1,1)  │ (1,2)  │
      ├────────┼────────┼────────┤           ├────────┼────────┼────────┤
  2   │   10   │   12   │   78   │       2   │ (2,0)  │ (2,1)  │ (2,2)  │
      └────────┴────────┴────────┘           └────────┴────────┴────────┘
                                           ↖ Row Index

<b>Note:</b><i>Index start from Zero</i>
</pre>

<h3>2. Second Method</h3>

<pre>

<p><b>int second[2][2]= {9,6,1}, {144,70,50}, {10,12,78};</b></p>

                                  Column Index ↘     
           1       2       3                                 1       2       3
      ┌────────┬────────┬────────┐                      ┌────────┬────────┬────────┐
  1   │   9    │   6    │   1    │                  1   │ [0][0] │ [0][1] │ [0][2] │ 1st Row
      ├────────┼────────┼────────┤                      ├────────┼────────┼────────┤
  2   │  114   │   70   │   50   │                  2   │ [1][0] │ [1][1] │ [1][2] │ 2nd Row
      ├────────┼────────┼────────┤                      ├────────┼────────┼────────┤
  3   │   10   │   12   │   78   │                  3   │ [2][0] │ [2][1] │ [2][2] │ 3rd Row
      └────────┴────────┴────────┘                      └────────┴────────┴────────┘
                                                      ↖ Row Index

</pre><br>

<h2 align="center">Accessing</h2>

<pre>

<p align="center"><b>int first [3][3]</b></p>
           0        1        2                                
      ┌────────┬────────┬────────┐                  
  0   │   9    │   6    │   1    │       
      ├────────┼────────┼────────┤                  
  1   │  114   │   70   │   50   │       
      ├────────┼────────┼────────┤                  
  2   │   10   │   12   │   78   │       
      └────────┴────────┴────────┘                  

</pre><br>

<p><b>--→ first [ 0 ] [ 0 ]</b></p>

<p align="center">
<b>
first [ 0 ] [ 1 ] = 6<br> 
first [ 0 ] [ 2 ] = 1<br>
first [ 1 ] [ 0 ] = 144<br>
first [ 1 ] [ 1 ] = 70<br>
first [ 1 ] [ 2 ] = 50<br> 
first [ 2 ] [ 0 ] = 10<br>
first [ 2 ] [ 1 ] = 12<br>
first [ 2] [ 2 ] = 78<br>
</b>
</p>

<pre>
<b>Print</b>

#include<stdio.h>
int main()
{
    int first [3][3] = {9,6,1,144,70,50,10,12,78};
    int i,j;
    for (i=0; i<3; i++);
    {
        for (j= 0; j<3; j++);
        {
            printf (%d, first [i][j];)
        }
    }
}

<b>Result:</b>

9 6 1 144 70 10 12 78
</pre><br>

<h1>Three Dimensional Arrays</h1>

















