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

    ListNode* mergeSortList(ListNode* l1 , ListNode* l2) {

        ListNode* dummyNode = new ListNode(-1) ;
        ListNode* temp = dummyNode ;

        while(l1 != nullptr && l2 != nullptr ) {
            
            if(l1 -> val <= l2 -> val) {

                temp -> next = l1 ;
                l1 = l1 -> next ;
            }
            
            else{
                temp -> next = l2 ;
                l2 = l2 -> next ;
            }
            temp = temp -> next ;
        }

        if(l1 != nullptr ) {
                temp -> next = l1 ;
            }

        if(l2 != nullptr ) {
                temp -> next = l2 ;
            }
    return dummyNode -> next ;
    }

    ListNode* sortList(ListNode* head) {
        
        if(head == nullptr || head -> next == nullptr) return head ;

        ListNode* slow = head ;
        ListNode* fast = head -> next ;
        
        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next ;
            fast = fast -> next -> next ;
        }

        ListNode* middle = slow ;
        
        ListNode* right = middle -> next ;
        middle -> next = nullptr ;
        slow = head ;

        ListNode* leftList= sortList(slow) ;
        ListNode* rightList = sortList(right) ;

        return mergeSortList(leftList , rightList ) ;
        
    }
};