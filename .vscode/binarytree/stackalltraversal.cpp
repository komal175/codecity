#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int main() {
    // Create a binary tree manually
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    stack<pair<TreeNode*,int>> st;
    st.push({root,1});
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    while(!st.empty()){
        auto it =st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push({it.first,it.second});
            if(it.first->left != nullptr){
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push({it.first,it.second});
            if(it.first->right !=nullptr){
                st.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->val);
        }
    }
    cout<<"preorder ";
    for(int val:pre) cout<<val<<" ";
    cout<<"\n"<<"inorder  ";
    for(int val:in) cout<<val<<" ";
    cout<<"\n"<<"postorder";
    for(int val:post) cout<<val<<" ";
}
