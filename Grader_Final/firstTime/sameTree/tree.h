#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <vector>

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }
    void inorder(Node *r , vector<int>& v) {
        if( r == null) return ;
        inorder(r->left) ;
        v.push_back(r->data) ;
        inorder(r->left) ;
    }
    bool isSameBinaryTree(Tree& t) {
        if(mSize != t.mSize) return false ;
        if(this->mRoot->data != t.mRoot->data) return false ;
        vector<int> t1,t2 ;
        inorder(this->mRoot , t1) ;
        inorder(t.mRoot , t2) ;
        for(int i = 0 ; i < t1.size() ; i++) {
            if(t1[i] != t2[i]) return false ;
        }
        return true ;
    }
    // You can also put your code here

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
