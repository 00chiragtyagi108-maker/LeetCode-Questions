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
    void reorderList(ListNode* head) {
        
        if(head == nullptr || head -> next == nullptr)
            return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr ) {
            slow = slow -> next ;
            fast = fast -> next -> next;
        }

        ListNode* curr = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* nextNode ;

        //Reverse Linked List
        while(curr != nullptr){
            nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }

        ListNode* temp = head;
        ListNode* aux = prev;

        // Merge the Two Linked List Halves 

        while(aux != nullptr){
            ListNode* tempNext = temp -> next;
            ListNode* auxNext = aux -> next;
            temp -> next = aux;
            aux-> next = tempNext;

            temp = tempNext;
            aux = auxNext;

        }
    }
};