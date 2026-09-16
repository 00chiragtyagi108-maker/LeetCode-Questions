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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* makeTree(ListNode* head ) {

        if(head == nullptr) return nullptr ;

        if(head -> next == nullptr)
            return new TreeNode(head -> val) ;

        ListNode* temp = head ;

        ListNode* slow = head ;
        ListNode* fast = head ;

        ListNode* prev = nullptr ;
    
        while(fast != nullptr && fast -> next != nullptr) {
            prev = slow ;
            fast = fast -> next -> next ;
            slow = slow -> next ;
        }

        TreeNode* root = new TreeNode(slow -> val ) ;

        prev -> next = nullptr ;

        TreeNode* leftTree =  makeTree(temp) ;
        TreeNode* rightTree = makeTree(slow -> next ) ;

        root -> left = leftTree ;
        root -> right = rightTree ;

        return root ;

    } 

    
    TreeNode* sortedListToBST(ListNode* head) {
        
        return makeTree(head) ;
    }
};