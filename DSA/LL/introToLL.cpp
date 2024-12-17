#include<bits/stdc++.h>
#define ll long long int
using namespace std;

struct Node {
  public:
  int data;
  struct Node* next;

  public:
  Node(int data1, Node* next1) {
    data = data1;
    next = next1;
  }
};

int main() {
  vector<int> v = {1, 3, 4, 5, 8};
  Node* y = new Node(v[2], nullptr);
  cout<<y->data<<endl;
  cout<<y->next<<endl;

  return 0;
}
