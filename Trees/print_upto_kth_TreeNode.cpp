#include <bits/stdc++.h>
using namespace std;

// It's a correct code, but here is mainly printAtLevel_kth depth TreeNode.

// void printAtLevelK(TreeNode<int>* root, int k) {
// 	if (root == NULL) {
// 		return;
// 	}

// 	if (k == 0) {
// 		cout << root->data << endl;
// 		return;
// 	}

// 	for (int i = 0; i < root->children.size(); i++) {
// 		printAtLevelK(root->children[i], k - 1);
// 	}
// }