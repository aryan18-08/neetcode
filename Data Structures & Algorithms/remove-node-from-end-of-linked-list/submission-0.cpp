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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            size++;
        }
        int res=size-n;
        if(res==0){
            head=head->next;
            return head;
        }
        ListNode* temp2=head;
        ListNode* temp3;
        int cnt=0;
        while(temp2){
            if(cnt==res-1){
                temp3=temp2;
            }
            if(cnt==res){
                temp3->next=temp2->next;
                temp2->next=nullptr;
                delete temp2;
                break;
            }
            cnt++;
            temp2=temp2->next;
        }
        return head;
    }
};
