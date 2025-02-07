#include <iostream>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

Node* createTree(){

    cout << "Enter the value for Node" << endl;
    int value;
    cin >> value;

    if (value == -1){
        // null set karne hai
        return NULL;
    }
    else{
        // valid case
        Node *root = new Node(value);
        // 1 case mei karliya, baaki left and right recursion dekh lega
        cout << "Adding left child for : " << value << endl;
        root->left = createTree();
        cout << "Adding right child for : " << value << endl;
        root->right = createTree();
        return root;
    }
}

void preOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }else{
        // NLR
        // N : current Node
        cout << root->data << " ";
        // L : left subtree
        preOrderTraversal(root->left);
        // R : right subtree
        preOrderTraversal(root->right);
    }
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }else{
        // LNR
        // L : left subtree
        preOrderTraversal(root->left);
        // N : current Node
        cout << root->data << " ";
        // R : right subtree
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }else{
        // LRN
        // L : left subtree
        preOrderTraversal(root->left);
        // R : right subtree
        preOrderTraversal(root->right);
        // N : current Node
        cout << root->data << " ";
    }
}

void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front==NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << front->data << " ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}

int main(){

    Node* root;
    root = createTree();

    // preOrderTraversal(root);
    // inOrderTraversal(root);
    // postOrderTraversal(root);

    levelOrderTraversal(root);
    
    return 0;
}
 