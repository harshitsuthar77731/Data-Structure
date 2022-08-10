
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* temp = head;
        while(temp&&temp->next){
           if(head->next&&head->val==head->next->val){
               head->next = head->next->next;
               temp = head;
           }
           else if(temp->next->val==temp->val){
               temp->next = temp->next->next;
           }
            else
                temp =temp->next;
        }
        return head;
    }
};
