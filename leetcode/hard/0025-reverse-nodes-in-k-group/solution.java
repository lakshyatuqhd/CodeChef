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
    public ListNode reverseKGroup(ListNode head, int k) {
        if (head == null || k == 1) {
            return head;
        }

        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode groupPrev = dummy;

        while (true) {
            // Step 1: Check if there are at least k nodes remaining to reverse
            ListNode kthNode = getKthNode(groupPrev, k);
            if (kthNode == null) {
                break;
            }
            ListNode groupNext = kthNode.next;

            // Step 2: Reverse the k nodes
            ListNode prev = groupNext;
            ListNode curr = groupPrev.next;
            
            while (curr != groupNext) {
                ListNode nextNode = curr.next;
                curr.next = prev;
                prev = curr;
                curr = nextNode;
            }

            // Step 3: Connect the reversed group back to the main list
            ListNode temp = groupPrev.next;
            groupPrev.next = kthNode;
            groupPrev = temp;
        }

        return dummy.next;
    }

    // Helper method to find the k-th node from a given start pointer
    private ListNode getKthNode(ListNode curr, int k) {
        while (curr != null && k > 0) {
            curr = curr.next;
            k--;
        }
        return curr;
    }
}