#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution { 
    public:
    bool hasCycle(ListNode *head) {
        
        if(head == NULL) return false;
        
        ListNode *fast = head->next;
        
        while(head != NULL && fast != NULL){
            if(head == fast) return true;

            head = head->next; // iterating every node;
            if(fast ->next == NULL) fast = fast->next;
            else fast = fast->next->next; // iterating by jumping 1 Node;
        }
        return false;  
    }
};

int main(){
 

  return 0;
}