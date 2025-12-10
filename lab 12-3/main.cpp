#include <iostream>
    using namespace std;

class node {
public:
    int data;
    node *left ,*right ;

    node(int value) {
        data = value;
        left = right= NULL;
    }

}
class BST {
public:
    node* root;
    BST() {
        root = NULL;
    }
    node *insert(node* r, int item) {
        if (r == NULL) {
            node* newnode =new node(item);
            r= newnode;
        }
        else if (item <=r->data)
            r->left = insert(r->left, item);

        else
            r->right = insert(r->right, item);


        return r ;
    }

    void insert (int item) {
        root = insert(root, item);
    }

{void preorder(node *r) {
    if (r == NULL)
        return;

    cout << r->data << " ";
    preorder(r->left);
    preorder(r->right);      
}




};
node *sarech (node *r ,int key ) {

    if (r == NULL)
    return NULL;
    else if (r->data == key)
        return sarech(r->left,key) ;

    else if (key < r->data)
        return sarech(r->left,key);

    else return sarech(r->right,key);
}

bool search(int key) {
node* r = sarech(root,key);
    if (r == NULL)
        return false;
    else
        return true;


}
node*findmin(node *r) {
if (r == NULL)
    return NULL;
    else if (r->left == NULL)
        return r ;
    else
        return findmin (r->left);

}
node*findmax(node *r) {
    if (r == NULL)
        return NULL;
    else if (r->right == NULL)
        return r ;
    else
        return findmax(r->right);
}

node * Delete(node*r ,int key) {
    if (r == NULL)
        return NULL;
    if (key < r->data)
        r->left = Delete(r->left,key);
    else if (key > r->data)
        r->right = Delete(r->right,key);
    else {
    if (r->left == NULL && r->right == NULL)
        r=NULL;
        else if (r->left != NULL && r->right != NULL) {
            r->data = r->left->data;
            delete r->left;
            r->left = NULL;
        }




    }









}





};




int main() {

BST btree;



        return 0;
    }





