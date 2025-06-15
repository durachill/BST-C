#include "tree.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Tree * createTree() {
    auto const tree = (Tree *)malloc(sizeof(Tree));
    if (tree) tree->root = nullptr;
    return tree;
}

void freeNode(Node * node) {
    if (node) {
        freeNode(node->left);
        freeNode(node->right);
        free(node->info);
        free(node);
    }
}

void freeTree(Tree * tree) {
    if (tree) {
        freeNode(tree->root);
        free(tree);
    }
}

Node * insertNode(Node * node, const int key, const char * info, char **old_info) {
    if (!node) {
        auto const newNode = (Node *)malloc(sizeof(Node));
        newNode->key = key;
        newNode->info = strdup(info);
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    if (key < node->key) {
        node->left = insertNode(node->left, key, info, old_info);
    }
    else if (key > node->key) {
        node->right = insertNode(node->right, key, info, old_info);
    }
    else {
        *old_info = node->info;
        node->info = strdup(info);
    }
    return node;
}

char * insert(Tree * tree, const int key, const char * info) {
    if (!tree || !info) return nullptr;

    char * old_info = nullptr;
    tree->root = insertNode(tree->root, key, info, &old_info);
    return old_info;
}

Node * findMin(Node * node) {
    while (node->left) {
        node = node->left;
    }
    return node;
}

Node * deleteNode(Node * node, int key, char **deleted_info) {
    if (!node) {
        return nullptr;
    }
    if (key < node->key) {
        node->left = deleteNode(node->left, key, deleted_info);
    }
    else if (key > node->key) {
        node->right = deleteNode(node->right, key, deleted_info);
    }
    else {
        *deleted_info = node->info;
        if (!node->left) {
            Node * temp = node->right;
            free(node);
            return temp;
        }
        if (!node->right) {
            Node * temp = node->left;
            free(node);
            return temp;
        }
        const Node * temp = findMin(node->right);
        node->key = temp->key;
        node->info = temp->info;
        node->right = deleteNode(node->right, temp->key, nullptr);

    }

    return node;
}

char * delete(Tree * tree, const int key) {
    char * deleted_info = nullptr;
    tree->root = deleteNode(tree->root, key, &deleted_info);
    return deleted_info;
}

const char * search(const Tree * tree, const int key) {
    const Node *current = tree->root;
    while (current) {
        if (key < current->key) {
            current = current->left;
        }
        else if (key > current->key) {
            current = current->right;
        }
        else {
            return current->info;
        }
    }
    return nullptr;
}

void outRange(const Node * node, const int min, const int max) {
    if (!node) {
        return;
    }

    if (node->key >= min) {
        outRange(node->left, min, max);
    }

    if (node->key >= min && node->key <= max) {
        printf("%d: %s\n", node->key, node->info);
    }

    if (node->key <= max) {
        outRange(node->right, min, max);
    }
}

void outTree(const Tree * tree, const int min, const int max) {
    if (min > max) {
        return;
    }
    outRange(tree->root, min, max);
}

const char * findMax(const Tree * tree) {
    if (!tree) {
        return nullptr;
    }
    const Node * current = tree->root;
    while (current->right) {
        current = current->right;
    }
    return current->info;
}
