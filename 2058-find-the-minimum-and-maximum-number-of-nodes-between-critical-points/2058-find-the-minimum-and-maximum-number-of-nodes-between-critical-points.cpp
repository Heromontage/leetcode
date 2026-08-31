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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = NULL;
        int k = 1;
        vector<int> ans;
        ListNode* temp = head;
        while (temp != NULL) {
            if (prev != NULL && temp->next != NULL) {
                if (prev->val > temp->val && temp->next->val > temp->val) {
                    ans.push_back(k);
                } else if (prev->val < temp->val &&
                           temp->next->val < temp->val) {
                    ans.push_back(k);
                }
            }
            k++;
            prev = temp;
            temp = temp->next;
        }
        if (ans.size() < 2) {
            return {-1, -1};
        } 
        int mi = INT_MAX;
        for (int i = 1; i < ans.size(); i++) {
            mi = min(mi, ans[i] - ans[i - 1]);
        }
        int ma = ans.back() - ans.front();

        return {mi, ma};
    }
};