class Solution {
    public boolean isPalindrome(Node head) {
        ArrayList<Integer> list = new ArrayList<>();

        Node temp = head;

        while (temp != null) {
            list.add(temp.data);
            temp = temp.next;
        }

        int i = 0, j = list.size() - 1;

        while (i < j) {
            if (!list.get(i).equals(list.get(j)))
                return false;

            i++;
            j--;
        }

        return true;
    }
}