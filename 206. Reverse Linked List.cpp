class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* newnode=NULL,*temp;
        while(head){
            temp = head->next;
            head->next=newnode;
            newnode = head;
            head = temp;
        }
        return newnode;
    }
};
