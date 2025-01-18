#include<bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  Node* next;

  Node(int data1, Node* next1 = nullptr) { 
    data = data1;
    next = next1;
  }
};

Node* converToarr(vector<int> &a) {
  if (a.empty()) return nullptr; 
  Node* head =new Node(a[0]); 
  Node* mover =head;
  for (int i =1; i<a.size(); i++) {
    Node* temp=new Node(a[i]);
    mover->next=temp;         
    mover=temp;                
  }
  return head; 
}
int findelem(Node* head, int num){
 Node* ptr = head; // traverse karne ke liye ham ek ptr leke chalte hai
 while(ptr){
  if(ptr->data==num) return 1;
  ptr=ptr->next;
 }
 return 0
}

int main() {
  vector<int> a = {22, 23, 24, 25, 30};
  Node* head = converToarr(a);
}
