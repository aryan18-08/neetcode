/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* merge(ListNode* temp1,ListNode*temp2){
        ListNode dummy;
        ListNode* t1=temp1;
        ListNode* t2=temp2;
        ListNode* t3=&dummy;
        while(t1&&t2){
            if(t1->val<=t2->val){
                t3->next=t1;
                t3=t1;
                t1=t1->next;
            }
            else{
                t3->next=t2;
                t3=t2;
                t2=t2->next;
            }
        }
        if(t1){
            t3->next=t1;
        }
        if(t2){
            t3->next=t2;
        }
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0){
            return nullptr;
        }
        if(n==1){
            return lists[0];
        }
        for(int i=0;i<n-1;i++){
            lists[0]=merge(lists[0],lists[i+1]);
        }
        return lists[0];
    }
};
