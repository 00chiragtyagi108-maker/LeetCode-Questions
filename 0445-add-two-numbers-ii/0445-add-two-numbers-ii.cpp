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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        

        if(l1 == nullptr) return l2;
        if(l2 == nullptr) return l1;

        ListNode* prev = nullptr ;
        ListNode* curr = l1;
        ListNode* nextNode = l1;

        while(curr != nullptr){
            nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }

        l1 = prev;

        prev = nullptr ;
        curr = l2;
        nextNode = l2;

        while(curr != nullptr){
            nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }

        l2 = prev;


        ListNode newNode(0);
        ListNode* dummy = &newNode;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        while(temp1 != nullptr && temp2 != nullptr){
            temp1 -> val += temp2 -> val;
            if(temp1 -> val >= 10){
                temp1 -> val %= 10;
                if(temp1-> next){
                    temp1 -> next -> val += 1; 
                } 
                else{
                    temp1 -> next = new ListNode(1); 
                } 
            }

        dummy -> next = temp1;
        dummy = dummy -> next;
        temp1 = temp1 -> next;
        temp2 = temp2 -> next; 
        }

         while(temp1 != nullptr ){
          if(temp1 -> val >= 10){
            temp1 -> val %= 10;
            if(temp1 -> next){
                temp1 -> next -> val += 1;
            }
            else{
                temp1->next = new ListNode(1); 
            }
          }
        dummy -> next = temp1;
        dummy = dummy -> next;
        temp1 = temp1 -> next;
       }

       while(temp2 != nullptr ){
          if(temp2 -> val >= 10){
            temp2 -> val %= 10;
            if(temp2 -> next){
                temp2 -> next -> val += 1;
            } 
            else{
                temp2 -> next = new ListNode(1); 
            }
          }

        dummy -> next = temp2;
        dummy = dummy -> next;
        temp2 = temp2 -> next;
            
        l1 = prev;

        }

        prev = nullptr ;
        curr = newNode.next;
        nextNode = curr;

        while(curr != nullptr){
            nextNode = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
};