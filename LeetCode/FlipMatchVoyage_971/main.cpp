#include <iostream>
#include <vector>
using namespace std;
//Definition for a binary tree node.
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        vector<int> result;
        int begin = 0;
        dfs(root, voyage, begin, result);
        if(flag == 1){
            result.push_back(-1);
            return result;
        }
        return result;
    }
    void dfs(TreeNode* root, vector<int>& voyage, int &i, vector<int> &result){
        if(root == nullptr || i == voyage.size()){
            return;
        }
        if(root->val != voyage[i]){
            flag = 1;
            return;
        }
        if(root->left != nullptr && root->left->val != voyage[i+1]){
            TreeNode * temp = root->left;
            root->left = root->right;
            root->right = temp;
            result.push_back(root->val);
        }
        i++;
        dfs(root->left, voyage, i, result);
        dfs(root->right, voyage, i, result);
        return;
    }
private:
    int flag = 0;
};
int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    vector<int> voyage{1, 3, 2};
    Solution s;
    s.flipMatchVoyage(root, voyage);
    return 0;
}
