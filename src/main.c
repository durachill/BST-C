#include "../Tree/tree.h"

int main() {
    Tree *t = createTree();
    runInterface(t);
    freeTree(t);
    return 0;
}
