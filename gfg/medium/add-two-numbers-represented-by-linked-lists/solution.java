
class Solution {
    public Node addTwoLists(Node head1, Node head2) {
        head1 = removeZeros(head1);
        head2 = removeZeros(head2);

        head1 = reverse(head1);
        head2 = reverse(head2);

        Node dummy = new Node(0);
        Node temp = dummy;
        int carry = 0;

        while (head1 != null || head2 != null || carry != 0) {
            int sum = carry;

            if (head1 != null) {
                sum += head1.data;
                head1 = head1.next;
            }

            if (head2 != null) {
                sum += head2.data;
                head2 = head2.next;
            }

            temp.next = new Node(sum % 10);
            temp = temp.next;
            carry = sum / 10;
        }

        Node ans = reverse(dummy.next);
        return ans == null ? new Node(0) : removeZeros(ans);
    }

    Node reverse(Node head) {
        Node prev = null;

        while (head != null) {
            Node next = head.next;
            head.next = prev;
            prev = head;
            head = next;
        }

        return prev;
    }

    Node removeZeros(Node head) {
        while (head != null && head.data == 0 && head.next != null) {
            head = head.next;
        }

        return head;
    }
}
