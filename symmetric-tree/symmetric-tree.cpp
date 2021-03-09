class Solution {
public:
    
    bool checker(TreeNode* lNode, TreeNode* rNode) {
      if (!lNode && !rNode)
        return true;
      
      if (!lNode || !rNode)
        return false;
      
      if (lNode->val != rNode->val)
        return false;
      
      if(!checker(lNode->left, rNode->right)) //3,3
        return false;
      
      if (!checker(lNode->right, rNode->left)) // 4,4
        return false;
      
      return true;
    }
    
    bool isSymmetric(TreeNode* root) {
      if (!root)
        return true;
      
      bool result = checker(root->left, root->right); //2,2
      return result;  
    }
};