#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* segregateEvenOdd(ListNode* head) {
    if (!head) return head;

    ListNode* evenHead = nullptr;
    ListNode* evenTail = nullptr;
    ListNode* oddHead = nullptr;
    ListNode* oddTail = nullptr;

    ListNode* curr = head;

    while (curr) {
        if (curr->val % 2 == 0) {
            if (!evenHead) {
                evenHead = curr;
                evenTail = curr;
            } else {
                evenTail->next = curr;
                evenTail = curr;
            }
        } else {
            if (!oddHead) {
                oddHead = curr;
                oddTail = curr;
            } else {
                oddTail->next = curr;
                oddTail = curr;
            }
        }
        curr = curr->next;
    }

    if (evenHead) {
        if(oddHead){
            evenTail->next = oddHead;
            oddTail->next = nullptr; // Important: Null-terminate the odd list
            return evenHead;
        } else {
            evenTail->next = nullptr; // important, terminate the list
            return evenHead;
        }

    } else {
        if(oddHead){
            oddTail->next = nullptr; // Important: Null-terminate the odd list
            return oddHead;
        } else{
            return nullptr;
        }
    }
}

// Helper function to create a linked list from a vector
ListNode* createLinkedList(vector<int> arr) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int val : arr) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

// Main function for testing
int main() {
    // Example usage
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    ListNode* head1 = createLinkedList(arr1);
    cout << "Original list: ";
    printLinkedList(head1);
    ListNode* segregatedList1 = segregateEvenOdd(head1);
    cout << "Segregated list: ";
    printLinkedList(segregatedList1);

    vector<int> arr2 = {1, 3, 5};
    ListNode* head2 = createLinkedList(arr2);
    cout << "Original list: ";
    printLinkedList(head2);
    ListNode* segregatedList2 = segregateEvenOdd(head2);
    cout << "Segregated list: ";
    printLinkedList(segregatedList2);
    
    vector<int> arr3 = {2, 4, 6, 8};
    ListNode* head3 = createLinkedList(arr3);
    cout << "Original list: ";
    printLinkedList(head3);
    ListNode* segregatedList3 = segregateEvenOdd(head3);
    cout << "Segregated list: ";
    printLinkedList(segregatedList3);

    vector<int> arr4 = {1,1,1,2,2,2};
    ListNode* head4 = createLinkedList(arr4);
    cout << "Original list: ";
    printLinkedList(head4);
    ListNode* segregatedList4 = segregateEvenOdd(head4);
    cout << "Segregated list: ";
    printLinkedList(segregatedList4);


    return 0;
}