// 3) Print all permutations of a string using recursion (e.g., "abc" → "abc", "acb", etc.).

/* 
Permutations: A permutation is a different arrangement of the characters in a string. 
 e.g The permutations of "ABC" are: ABC, ACB, BAC, BCA, CAB, CBA.
*/

#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char *str, int start, int end) {
    if (start == end) {
        printf("%s\n", str);  // Base case: one permutation completed
    } else {
        for (int i = start; i <= end; i++) {
            swap(&str[start], &str[i]);       // Swap current index with start
            permute(str, start + 1, end);     // Recurse for the rest of the string
            swap(&str[start], &str[i]);       // Backtrack (undo swap)
        }
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);
    printf("All permutations of the string \"%s\" are:\n", str);
    permute(str, 0, n - 1);
    return 0;
}
