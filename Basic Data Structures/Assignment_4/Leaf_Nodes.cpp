#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val==-1){
        root=NULL;
    }
    else
        root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty()){
        Node *p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node *left;
        Node *right;
        if(l==-1)
            left=NULL;
        else
            left=new Node(l);
        if(r==-1)
            right=NULL;
        else
            right=new Node(r);

        p->left=left;
        p->right=right;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;

}
vector<int> leaf_node(Node*root){
    vector<int>v;
    queue<Node*>q;
    if(root)
        q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node->left==NULL && node->right==NULL){
            v.push_back(node->val);
        }
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
    }
    sort(v.begin(),v.end(),greater<int>());
    return v;
}

int main(){
    Node *root=input_tree();
    vector<int>leaf=leaf_node(root);
    for(int val:leaf){
        cout<<val<<" ";
    }
    return 0;
}