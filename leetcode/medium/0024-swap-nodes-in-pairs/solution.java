/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        // Create a dummy node to simplify edge cases (like swapping the head)
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prev = dummy;
        
        // Loop as long as there are at least two nodes left to swap
        while (prev.next != null && prev.next.next != null) {
            ListNode first = prev.next;
            ListNode second = prev.next.next;
            
            // Step-by-step pointer reassignment for swapping
            first.next = second.next;
            second.next = first;
            prev.next = second;
            
            // Move the prev pointer forward by two nodes for the next pair
            prev = first;
        }
        
        return dummy.next;
    }
}