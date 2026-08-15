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
    int getDecimalValue(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* nextNode = head;

        while(curr != nullptr){
            nextNode = nextNode -> next ;
            curr -> next = prev ;
            prev = curr;
            curr = nextNode;

        }

        head = prev;


        int multiple = 1;
        int ans = 0;

        ListNode* temp = head;

        while(temp != nullptr){

            ans = ans + multiple * temp -> val;

            multiple = multiple * 2;
            temp = temp -> next ;
        }
        
        return ans;
    }
};