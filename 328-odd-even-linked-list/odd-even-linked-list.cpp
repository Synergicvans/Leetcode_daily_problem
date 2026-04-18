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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> eve;
        vector<int> odd;

        ListNode* temp=head;
        int i=1;
        while(temp!=nullptr){
            if(i%2==0){
                eve.push_back(temp->val);
            }
            else odd.push_back(temp->val);
            temp=temp->next;
            i++;
        }
        temp=head;
        for(int i=0;i<odd.size();i++){
            temp->val=odd[i];
            temp=temp->next;
        }
        for(int i=0;i<eve.size();i++){
            temp->val=eve[i];
            temp=temp->next;
        }

        return head;
    }
};