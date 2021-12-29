 bool solve(Node* root, int min = INT_MIN, int max = INT_MAX) 
   {
       // Your code here
       if(root == NULL){
           return true;
       }
       if(root -> data <= min || root -> data >= max){
           return false;
       }
       bool isLeftOkay = solve(root -> left, min, root -> data);
       bool isRightOkay = solve(root -> right, root -> data, max);
       
       return isLeftOkay && isRightOkay;
   }
    
    bool isBST(Node* root) 
    {
        // Your code here
        return solve(root,INT_MIN,INT_MAX);
    }
