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
// int findlen(Node* head){
//    int cnt=0;
//     Node* ptr =head;
//     while (ptr) {                         
//     // cout << ptr->data << " "; 
//     ptr=ptr->next;    
//     cnt++;   
//   }
//   return cnt;
// }
void print(Node* head){
  while(head){
    cout<<head->data<<" ";
    head = head->next;  
  }
  cout<<endl;
}
Node* remove1stnode(Node* head){
  Node* temp = head;
  head = head->next;
  delete temp;
  return head;
}
Node* Addnode(Node* head){

}

int main() {
  vector<int> a = {22, 23, 24, 25, 30};
  Node* head=converToarr(a);      
  head = remove1stnode(head);
  print(head);  
  
}
