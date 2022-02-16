class Solution {
public:
    int getSize(ListNode* head){
        ListNode* temp = head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int totalLength = getSize(head);
        int curLength = 0;
        ListNode* newHead=NULL,*lastFirst=NULL,*cur=head;
        while(totalLength-curLength>=k){
            ListNode* prev = NULL;
            ListNode* first = cur;
            for(int i=0;i<k;i++){
                ListNode* next = cur->next;
                cur->next = prev;
                prev = cur;
                cur = next;
            }
            if(newHead==NULL){
                newHead = prev;
            }
            if(lastFirst!=NULL){
                lastFirst->next = prev;
            }
            lastFirst = first;
            curLength+=k;
        }
        if(curLength<totalLength){
            if(lastFirst){
                lastFirst->next = cur;
            }
        }
        return newHead;
    }
};
