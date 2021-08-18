class Solution{
  public:
  void verSum(Node* root,int hd, map<int, int> &mp)
  {
      if(root == NULL)
      return;
      
      verSum(root->left,hd - 1 , mp);
      mp[hd] += root->data;
      verSum(root->right,hd+1,mp);
  }
    vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> vec;
        map<int,int> mp;
        verSum(root,0,mp);
        
        for(auto a : mp)
        {
            vec.push_back(a.second);
        }
        return vec;
    }
};
