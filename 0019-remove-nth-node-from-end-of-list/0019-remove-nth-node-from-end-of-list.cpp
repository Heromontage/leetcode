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
        if(head==NULL || head->next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        int k = 0;
        while(temp!=NULL){
            temp = temp->next;
            k++;
        }
        if(k==n){
            return head->next;
        }
        temp = head;
        int j = 0;
        while(temp!=NULL && j<k-n){
            prev = temp;
            temp = temp->next;
            next = temp->next;
            j++;
        }
        prev->next = next;
        delete temp;
        return head;
    }
};