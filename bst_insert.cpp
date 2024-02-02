// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
        Node* lchild;
        int data;
        Node* rchild;
};

class BST{
    private:
    Node* root;
    public:
    BST(){
        root=nullptr;
    }
    Node* getRoot(){
        return root;
    }
    void Insert(int key);
    void Inorder(Node* p);
    Node* Search(int key);
};

void BST::Insert(int key){
    Node* t=root;
    Node* p;
    Node* r;

    if (root==nullptr){
        p=new Node;
        p->data=key;
        p->lchild=nullptr;
        p->rchild=nullptr;
        root=p;
        return;
    }
    while(t!=nullptr){
        r=t;
        if(key<t->data){
            t=t->lchild;
        }
        else if(key>t->data){
            t=t->rchild;
        }
        else{
            return;
        }
    }
    //Now t points at NULL and r points at insert location
    p=new Node;
    p->data = key;
    p->lchild=nullptr;
    p->rchild=nullptr;

    if(key<r->data){
        r->lchild=p;
    }
    else{
        r->rchild=p;
    }
}

void BST::Inorder(Node* p){
    if(p){
        Inorder(p->lchild);
        cout<<p->data<<" "<<flush;
        Inorder(p->rchild);
    }
}

Node* BST::Search(int key){
    Node* t=root;
    while(t!=NULL){
        if(key==t->data){
            return t;
        }
        else if(key<t->data){
            t=t->lchild;
        }
        else{
            t=t->rchild;
        }
    }
    return nullptr;
}
int main() {
    BST bst;

    bst.Insert(1);
    bst.Insert(2);
    bst.Insert(3);
    bst.Insert(4);
    bst.Insert(5);
    bst.Insert(6);
    bst.Insert(7);
    bst.Insert(8);
    bst.Insert(9);
    bst.Insert(10);
    bst.Insert(19);
    bst.Insert(13);
    bst.Insert(14);
    bst.Insert(15);
    bst.Insert(16);
    bst.Insert(17);
    bst.Insert(18);
    bst.Insert(20);
    bst.Insert(21);
    bst.Insert(22);
    bst.Insert(23);

    bst.Inorder(bst.getRoot());
    cout<<endl;

    Node* temp = bst.Search(2);
    if(temp!=NULL){
        cout<<temp->data<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}