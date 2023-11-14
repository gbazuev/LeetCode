#include <iostream>

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr;
        
        ListNode* rev = nullptr;

        while(head != nullptr)  {
            ListNode* temp = head->next;
            head->next = rev;
            rev = head;
            head = temp;
        }

        return rev;
    }

    ListNode* reverseListRecursievly(ListNode* head) {
    if (head == nullptr) return nullptr;
        
        ListNode* rev = nullptr;

        return reverseNodes(head, rev);
    }

    ListNode* reverseNodes(ListNode* node, ListNode* rev)  {
        if (node == nullptr)    {
            return rev;
        }

        ListNode* temp = node->next;
        node->next = rev;
        rev = node;
        node = temp;

        return reverseNodes(node, rev);
    }
};
