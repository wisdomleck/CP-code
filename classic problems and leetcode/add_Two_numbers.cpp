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

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        // Make it that both linked lists are equal in length. add 0s;
        while(temp1->next != nullptr || temp2->next != nullptr){
            if(temp1->next == nullptr){
                ListNode* tempnode = new ListNode;
                tempnode->val = 0;
                tempnode->next = nullptr;
                temp1->next = tempnode;
            }
            else if(temp2->next == nullptr){
                ListNode* tempnode = new ListNode;
                tempnode->val = 0;
                tempnode->next = nullptr;
                temp2->next = tempnode;
            }

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        // Now actually add

        ListNode* anshead = nullptr;
        ListNode* ansfoot = nullptr;
        int carryover = 0;

        temp1 = l1;
        temp2 = l2;

        while(temp1 != nullptr && temp2 != nullptr){
            int value = (temp1->val + temp2->val + carryover) % 10;
            auto tempnode = new ListNode;
            tempnode->val = value;
            tempnode->next = nullptr;
            if(anshead == nullptr){
                anshead = tempnode;
                ansfoot = tempnode;
            }
            else{
                ansfoot->next = tempnode;
                ansfoot = tempnode;
            }

            carryover = (temp1->val + temp2->val + carryover) / 10;

            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(carryover != 0){
            auto tempnode = new ListNode;
            tempnode->val = carryover;
            tempnode->next = nullptr;

            ansfoot->next = tempnode;
            ansfoot = tempnode;
        }


        return anshead;
    }
};
