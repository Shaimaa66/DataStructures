#include <iostream>
#include <memory>

struct Node {
    int key;
    std::unique_ptr<Node> left, right;
    explicit Node(int value) : key(value) {}
};

void insert(std::unique_ptr<Node>& node, int key) {
    if (!node) { node = std::make_unique<Node>(key); return; }
    if (key < node->key) insert(node->left, key);
    else if (key > node->key) insert(node->right, key);
}

bool contains(const Node* node, int target) {
    if (!node) return false;
    if (target == node->key) return true;
    return target < node->key
        ? contains(node->left.get(), target)
        : contains(node->right.get(), target);
}

void inorder(const Node* node) {
    if (!node) return;
    inorder(node->left.get());
    std::cout << ' ' << node->key;
    inorder(node->right.get());
}

int main() {
    int n = 0;
    if (!(std::cin >> n) || n < 1 || n > 100) {
        std::cout << "Invalid count\n";
        return 1;
    }
    std::unique_ptr<Node> root;
    for (int i = 0; i < n; ++i) {
        int key = 0;
        if (!(std::cin >> key)) {
            std::cout << "Invalid key\n";
            return 1;
        }
        insert(root, key);
    }
    int target = 0;
    if (!(std::cin >> target)) {
        std::cout << "Invalid target\n";
        return 1;
    }
    std::cout << "Inorder:";
    inorder(root.get());
    std::cout << '\n';
    std::cout << (contains(root.get(), target) ? "FOUND" : "NOT FOUND") << '\n';
    return 0;
}
