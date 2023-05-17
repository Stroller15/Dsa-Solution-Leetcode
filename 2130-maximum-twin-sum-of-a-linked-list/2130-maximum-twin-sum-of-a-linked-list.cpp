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
    int pairSum(ListNode* head) {
        if(!head) return 0;

        ListNode *slow = head, *fast = head, *temp = head;
        stack<int> st;
        int ans = 0;

        while(fast && fast -> next) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        while(slow) {
            st.push(slow->val);
            slow = slow -> next;
        }

        while(!st.empty()) {
            int firstVal = temp->val;
            temp = temp -> next;
            int secondVal = st.top();
            st.pop();
            ans = max(ans, firstVal+secondVal);
        }
        return ans;
    }
};