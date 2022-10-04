class Solution {
public:
    bool solve(TreeNode* root,int s, int sum){
        if(root==nullptr)
            return false;
       
        if(root->left==NULL && root->right == NULL){
            s += root->val;
            if(s == sum){
                return true;
            }else{
                return false;
            }
        }
        s += root->val;
        if(root->left){
           if(solve(root->left,s,sum)){
               return true;
           }
            
        }
        if(root->right){
              if(solve(root->right,s,sum)){
               return true;
           }
        }
        return false;
        
    }
    
    
    
    bool hasPathSum(TreeNode* root, int sum) {
        return solve(root,0,sum);
    }
};
