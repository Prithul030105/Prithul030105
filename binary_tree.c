#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* left;
    struct node* right;
};


struct node* createnode(int d) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = d;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;

}


void inorderDFS(struct node* node) {
    if (node == NULL) return;
    inorderDFS(node->left);
    printf("%d ", node->data);
    inorderDFS(node->right);
}

void preorderDFS(struct node* node) {    
    if (node == NULL) return;
    printf("%d ", node->data);
    preorderDFS(node->left);
    preorderDFS(node->right);
}


void postOrderDFS(struct node* node) {
    if (node == NULL) return;
    postOrderDFS(node->left);
    postOrderDFS(node->right);
    printf("%d ", node->data);
}

// BFS: Level order traversal
void BFS(struct node* root) {
    if (root == NULL) return;
    struct node* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front < rear) {
        struct node* node = queue[front++];
        printf("%d ", node->data);
        if (node->left)
            queue[rear++] = node->left;
        if (node->right)
            queue[rear++] = node->right;
    }
}

int main() {
    // Create nodes for the binary tree
    struct node* firstnode = createnode(2);
    struct node* secondnode = createnode(3);
    struct node* thirdnode = createnode(4);
    struct node* fourthnode = createnode(5);

    // Connect the nodes to form the binary tree
    firstnode->left = secondnode;
    firstnode->right = thirdnode;
    secondnode->left = fourthnode;

    // Print traversals of the binary tree
    printf("Inorder Traversal: ");
    inorderDFS(firstnode);
    printf("\n");

    printf("Preorder Traversal: ");
    preorderDFS(firstnode);
    printf("\n");

    printf("Postorder Traversal: ");
    postOrderDFS(firstnode);
    printf("\n");

    printf("BFS Traversal: ");
    BFS(firstnode);
    printf("\n");

    return 0;
}
