#ifndef TREE_H
#define TREE_H


typedef struct Node {
    int key;
    char * info;
    struct Node * left;
    struct Node * right;
}Node;

typedef struct {
    Node * root;
}Tree;

Tree * createTree();

void freeNode(Node * node);
void freeTree(Tree * tree);

Node * insertNode(Node * node, int key, const char * info, char **old_info);
char * insert(Tree * tree, const int key, const char * info);

Node* find_min(Node *node);
const char * findMax(const Tree * tree);


Node * deleteNode(Node * node, int key, char **deleted_info);
char * delete(Tree * tree, const int key);

const char * search(const Tree * tree, const int key);


void outRange(const Node * node, const int min, const int max);
void outTree(const Tree * tree, const int min, const int max);

void runInterface(Tree *);
#endif //TREE_H
