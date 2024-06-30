class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* current = head;
        while (current != NULL){
            count ++;
            current = current -> next;
        }

        int m = count/2;
        for(int i = 0; i<m ; i++){
            head = head -> next;
        }
        return head;
    }
};
