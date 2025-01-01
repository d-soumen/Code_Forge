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
int count_node(Node*root){
    if(root==NULL) return 0;
    int l=count_node(root->left);
    int r=count_node(root->right);
    return l+r+1;
}
int maxdepth(Node*root){
    if(root==NULL) return 0;
    int l=maxdepth(root->left);
    int r=maxdepth(root->right);
    return max(l,r)+1;
}
bool isPerfect(Node*root){
    int total_node=count_node(root);
    int depth =maxdepth(root);
    if(total_node== pow(2,depth)-1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    Node*root=input_tree();
    if(isPerfect(root))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}