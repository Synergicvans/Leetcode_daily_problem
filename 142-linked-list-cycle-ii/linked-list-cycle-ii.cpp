/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp=head;
        unordered_map<ListNode*,int>mpp;
        ListNode* loopnode=nullptr;
        
        while(temp!=nullptr){
            mpp[temp]++;
            if(mpp[temp]==2){
                loopnode=temp;
                break;
            }
            temp=temp->next;
        }      
        return loopnode;
    }
};