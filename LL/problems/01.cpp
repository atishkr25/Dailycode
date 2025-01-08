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
// Node* remove1stnode(Node* head){
//   Node* temp = head;
//   head = head->next;
//   delete temp;
//   return head;
// }

Node* removeTail(Node* head){
  Node* temp = head;
  if(head==NULL || head->next==NULL) return NULL;
  while(temp->next->next!=NULL){
    temp=temp->next;
  }
  temp->next = NULL;
  delete(temp->next);

  return head;
}

Node* AdditonOf2LL(vector<int>&a, vector<int> &b,Node* head1, Node* head2){
 Node* t1 = head1;
 Node* t2 = head2;

 while(t1)

}
int main() {
  vector<int> a = {7, 5, 2, 6};
  vector<int> b = {2, 6, 9, 1, 2}
  Node* head1 = converToarr(a);  
  Node* head2 = converToarr(b);   
  print(head);  
  
}
