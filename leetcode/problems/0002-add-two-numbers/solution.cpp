#include <bits/stdc++.h>

using namespace std;

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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int tmp = 0;
            ListNode *res = NULL, *tail = NULL;
            while (l1 != NULL || l2 != NULL || tmp == 1) {
                int num1 = (l1 != NULL ? l1->val : 0);
                int num2 = (l2 != NULL ? l2->val : 0);
                int sum = num1 + num2 + tmp;
                int x = sum % 10;
                tmp = sum / 10;
                ListNode* newNode = new ListNode(x);
                if (res == NULL) {
                    res = tail = newNode;
                } else {
                    tail->next = newNode;
                    tail = newNode;
                }
                if (l1)
                    l1 = l1->next;
                if (l2)
                    l2 = l2->next;
            }
            return res;
        }
    };
