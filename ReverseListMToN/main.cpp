#include <iostream>
using namespace std;

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode(int val):val(val), next(nullptr){};
};

ListNode* Reverse(ListNode * head, int M, int N){
    ListNode *dummy = new ListNode(0);
    dummy->next = head;
    ListNode *pre = dummy;
    ListNode *cur = head;
    for(int i = 1; i < M; i++){
        pre = pre->next;
        cur = cur->next;
    }
    for(int i = M; i < N; i++){
        ListNode *temp = cur->next;
        cur->next = temp->next;
        temp->next = pre->next;
        pre->next = temp;
    }
    return dummy->next;
}

int main() {
    ListNode *head, *temp;
    head = temp = new ListNode(0);
    for(int i = 1; i <= 9; i++){
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    temp->next = nullptr;
    int M = 1;
    int N = 7;
    ListNode *result = Reverse(head, M, N);
    while(result != nullptr){
        cout << result->val << endl;
        result = result->next;
    }
    return 0;
}
