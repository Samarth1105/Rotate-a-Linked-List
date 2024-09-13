struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if(head==NULL || k==0 ){
            return head;
        }
        
        Node* curr=head;
        Node* newHead;
        
        while(curr->next!=NULL && k>1){
            curr=curr->next;
            k--;
        }
        newHead= curr->next;
        curr->next=NULL;
        
        if(newHead!=NULL){
            Node* join=newHead;
            
            while(join->next!=NULL){
                join=join->next;
            }
            join->next=head;
            
            return newHead;
        }
        return head;
    }
};
