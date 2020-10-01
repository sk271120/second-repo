#include<bits/stdc++.h>
int depthhelper(char tree[], int index, int n) {
if (index >= n || tree[index] == 'l') 
        return 0; 
  
    // calc height of left subtree (In preorder 
    // left subtree is processed before right) 
    index++; 
    int left = depthhelper(tree, index, n); 
  
    // calc height of right subtree 
    index++; 
    int right = depthhelper(tree, index, n); 
  
    return max(left, right) + 1; 
}
int depth(char str[]) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int index =0;
    int n=strlen(str);
    int ans= depthhelper(str,index,n);
    return ans;
}

