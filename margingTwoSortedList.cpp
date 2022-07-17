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
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL && list2 == NULL) return NULL;
        else if(list1 == NULL) return list2;
        else if(list2 == NULL) return list1;
        
        ListNode* head = NULL;

        if(list1 ->val > list2->val){
            head = list2;
            list2 = list2 -> next;
        }
        else{
            head = list1;
            list1 = list1 -> next;
        }
        ListNode* current = head;

        while(list1!= NULL && list2 != NULL){
            if(list1 ->val > list2->val){
                current->next = list2;
                list2 = list2 ->next;
            }
            else{
                current->next = list1;
                list1 = list1 ->next;
            }
            current = current ->next;
        }

        if(list1 == NULL){
            current ->next = list2;
        }
        else current->next = list1;

        return head;
        
    }
};



int main(){
 

  return 0;
}