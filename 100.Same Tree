/** 
 *Given two binary trees, write a function to check if they are equal or not.
 *
 *Two binary trees are considered equal if they are structurally identical and the nodes have the same value.
**/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( !p && q || p && !q)
            return false;
       stack<TreeNode*> s;
       stack<TreeNode*> t;
       while( !s.empty() || p){
           while(p){
               if( !q || p->val != q->val){
                   return false;
               }
               s.push(p);
               t.push(q);
               p=p->left;
               q=q->left;
           }
           if( q ){
               return false;
           }
           if(!s.empty()){
               p=s.top();
               s.pop();
               q=t.top();
               t.pop();
               p=p->right;
               q=q->right;
           }
       }
       return true;
    }
};
