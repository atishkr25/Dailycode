#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  Node* back;

  public:
  Node(int data1, Node* next1, Node* back1) {
    data = data1;
    next = next1;
    back = back1;
  }
  public: 
  Node(int data1){
    data = data1;
    next = nullptr;
    back = nullptr;
  }
};

void print(Node* head){
  while(head){
    cout<<head->data<<" ";
    head = head->next;  
  }
  cout<<endl;
}

Node* convert2DLL(vector<int> &a){
    Node* head = new Node(a[0]);
    Node* prev = head;  
    for(int i = 1;i<a.size(); i++){
      Node* temp = new Node(a[i], nullptr, prev);
      prev->next = temp;
      prev = temp; // prev = prev->next;
    }
    return head;
}

Node* deleteHead(Node* head){
  if(head == nullptr || head->next ==nullptr){
    return nullptr;
  }
  Node* prev = head;
  head = head->next;
  head->back = nullptr;
  prev->next = nullptr;

  delete prev;

  return head;
}

Node* DeleteTail(Node* head){
  if(head==NULL || head->next == NULL) return NULL;
  Node* ptr = head;
  while(ptr->next!=NULL){
    ptr = ptr->next;
  }
  Node* newTail = ptr->back;
  ptr->back = nullptr;
  newTail->next = nullptr;

  delete(ptr);

  return head;
}

Node* DeleteKthElem(Node* head, int k){
    if(head==NULL) return NULL;

    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev == nullptr && front == nullptr){
        return NULL;
    } else if(prev == nullptr){
        return deleteHead(head);
    } else if(front == nullptr){
        return DeleteTail(head);
    }

    prev->next = front;
    front-> back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}

int main(){
  vector<int> a = {12, 23, 35, 45, 18, 19};
  Node* head = convert2DLL(a);
  Node* newhead = DeleteKthElem(head, 5);
  print(newhead);
}