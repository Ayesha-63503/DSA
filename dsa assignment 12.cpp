#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
};

Node* createNode(char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void infix(Node* root) {
    if (root != NULL) {
        if (root->left != NULL) cout << "(";
        infix(root->left);
        cout << root->data;
        infix(root->right);
        if (root->right != NULL) cout << ")";
    }
}

void prefix(Node* root) {
    if (root != NULL) {
        cout << root->data;
        prefix(root->left);
        prefix(root->right);
    }
}

void postfix(Node* root) {
    if (root != NULL) {
        postfix(root->left);
        postfix(root->right);
        cout << root->data;
    }
}

int main() {
    Node* root = createNode('*');
    root->left = createNode('+');
    root->right = createNode('-');

    root->left->left = createNode('a');
    root->left->right = createNode('b');
    root->right->left = createNode('c');
    root->right->right = createNode('d');

    cout << "Infix Expression: ";
    infix(root);
    cout << endl;

    cout << "Prefix Expression: ";
    prefix(root);
    cout << endl;

    cout << "Postfix Expression: ";
    postfix(root);
    cout << endl;

    return 0;
}
