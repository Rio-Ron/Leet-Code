#include<bits/stdc++.h>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    
    ListNode* reverseListRec(ListNode* head, ListNode* prev){
        if(head == NULL){
            return prev;
        }
        ListNode* next = head->next;
        
        head->next = prev;
        prev = head;
        
        return reverseListRec(next,prev);
    }
    
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        
        return reverseListRec(head,prev);
    }
};
