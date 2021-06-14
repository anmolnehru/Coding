class Solution {
public:
   int dfs(vector<int> &lc,vector<int> &rc, int root)   // DFS from root to validate that all nodes are visited.
    {
        if(root==-1)
            return 0;
       
        return 1 + dfs(lc, rc, lc[root]) + dfs(lc, rc, rc[root]);
    }
    
    bool validateBinaryTreeNodes(int n, vector<int>& lc, vector<int>& rc) 
    {
        vector<int> inDegree(n,0); // track how many parents
        
        int root = -1; // init
        
        for (int i = 0; i < lc.size(); i++) {
            if(lc[i] != -1)  {
                inDegree[lc[i]]++;
                if (inDegree[lc[i]] > 1)   { //If in-degree exceeds 1 return false. 
                    // cout << "false 1";
                    return false;
                }
            }
            
            if (rc[i] != -1) {
                inDegree[rc[i]]++;  
                if(inDegree[rc[i]] > 1) { //If in-degree exceeds 1 return false.
                    // cout << "false 2";
                    return false;
                }
            }
        }     
            
        for (int i = 0; i < lc.size(); i++) { //Find root and also check for multiple roots.
           if (inDegree[i] == 0)  //If in-degree == 0 it's a root
               if (root == -1)   //Store the root.
                   root = i;
               else    //We have multiple roots, return false 
               {
                   // cout << "multiple roots";
                   // cout << "Old root" << root <<endl;
                   // cout << "New root" << i <<endl;
                   return false;
               }
        }
        
        if (root == -1) // no root found, cyclish
               {
                   // cout << "no roots";
                   return false;
               }        
        return dfs(lc, rc, root) == n;
    }
};