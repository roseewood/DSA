package ProblemSolving;
// 4) 
class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
        this.next = null;
    }
}

public class MergeSortedLists {
    // Function to merge two sorted linked lists
    public static ListNode mergeLists(ListNode l1, ListNode l2) {
        // Dummy node to simplify the merge process
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;

        // Traverse both lists and link the smaller node
        while (l1 != null && l2 != null) {
            if (l1.val < l2.val) {
                current.next = l1;  // Link node from l1
                l1 = l1.next;
            } else {
                current.next = l2;  // Link node from l2
                l2 = l2.next;
            }
            current = current.next;
        }

        // At least one of the lists is now null
        // Attach the remaining list (whichever is not null)
        if (l1 != null) {
            current.next = l1;
        } else {
            current.next = l2;
        }

        return dummy.next;  // Skip the dummy node
    }

    // Helper function to print a linked list
    public static void printList(ListNode head) {
        while (head != null) {
            System.out.print(head.val);
            if (head.next != null) System.out.print(" -> ");
            head = head.next;
        }
        System.out.println();
    }

    // Helper function to create a linked list from an array
    public static ListNode createList(int[] arr) {
        if (arr.length == 0) return null;
        ListNode head = new ListNode(arr[0]);
        ListNode current = head;
        for (int i = 1; i < arr.length; i++) {
            current.next = new ListNode(arr[i]);
            current = current.next;
        }
        return head;
    }

    // Main method
    public static void main(String[] args) {
        // Create two sorted lists
        int[] arr1 = {1, 3, 5};
        int[] arr2 = {2, 4, 6};

        ListNode list1 = createList(arr1);
        ListNode list2 = createList(arr2);

        System.out.println("List 1:");
        printList(list1);

        System.out.println("List 2:");
        printList(list2);

        ListNode merged = mergeLists(list1, list2);

        System.out.println("Merged List:");
        printList(merged);
    }
}
