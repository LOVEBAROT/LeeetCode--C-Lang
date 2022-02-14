int maxDepth(struct TreeNode* root){
    if(!root)
    {
        return 0;
    }
    int LeftDepth = maxDepth(root->left);
    int RightDepth = maxDepth(root->right);
    if(LeftDepth > RightDepth)
    {
        return LeftDepth + 1;
    }else{
        return RightDepth + 1;
    }
}