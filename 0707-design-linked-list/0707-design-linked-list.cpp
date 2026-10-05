class MyLinkedList {
public:

    struct ListNode {
        int val ;
        ListNode* next ;
        ListNode* prev ;

        ListNode(int x) {
            val = x ;
            next = nullptr ;
            prev = nullptr ;
        }
    };

    ListNode* head ;
    ListNode* tail ;

    MyLinkedList() {
        head = nullptr ;
        tail = nullptr ;
    }
    
    int get(int index) {

        if(index < 0) return -1 ;

        ListNode* temp = head ;

        for (int i = 0 ; i < index  ; i++) {
            temp = temp-> next ;
            if(temp == nullptr) 
                return -1 ;
        }

        if(temp == nullptr) 
            return -1 ;

        return temp -> val ;
    }
    
    void addAtHead(int val) {

        ListNode* newNode = new ListNode(val) ;
        newNode -> next = head ;

        if(head != nullptr)
            head -> prev = newNode ;
        
        else
            tail = newNode ;
        
        head = newNode ;
    }
    
    void addAtTail(int val) {

        ListNode* newNode = new ListNode(val) ;
        newNode -> prev = tail ;

        if(tail != nullptr ) 
            tail -> next = newNode ;

        else
            head = newNode ;

        tail = newNode ;
    }
    
    void addAtIndex(int index, int val) {
        
        if(index < 0 ) return ;

        if(index == 0 ) {
            addAtHead(val) ;
            return ;
        }

        ListNode* temp = head ;
        
        for(int i = 0 ; i < index-1 ; i++){
           
            if(temp == nullptr) return ;

            temp = temp -> next ;
        }

        if(temp == nullptr)
            return ;

        if(temp == tail) {

            addAtTail(val) ;
            return ;
        }

        ListNode* newNode = new ListNode(val);
        
        newNode -> prev = temp ;
        newNode -> next = temp -> next ;
        temp -> next -> prev = newNode ;  
        temp -> next = newNode ;
        
    }
    
    void deleteAtIndex(int index) {
       
        if(index < 0 || head == nullptr ) return ;

        if(index == 0 ) {
            ListNode* temp = head ;

            head = head -> next ;

            if(head != nullptr) 
                head -> prev = nullptr ;
            else
                tail = nullptr ;

            delete(temp) ;
            return ;

        }

        ListNode* temp = head ;
        
        for(int i = 0 ; i < index ; i++ ){
            if(temp == nullptr) return ;

            temp = temp -> next ;
        }

        if(temp == nullptr )
            return ;

        if(temp == tail) {
            
            tail = temp -> prev ;
            tail -> next = nullptr ;

            delete temp ;
            return ;
        } 

        temp -> prev -> next = temp -> next ;
        temp -> next -> prev = temp -> prev ;

        delete temp ;
    }
};

/**
 * Your MyListNode object will be instantiated and called as such:
 * MyListNode* obj = new MyListNode();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */