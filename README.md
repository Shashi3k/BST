# BST
<h1>Important Points:</h1>
1. No Duplicates
2. Inorder traversal gives sorted order
3. If there are "n" nodes present then no. of binary search trees that can be produced is:
          (2nCn)/(n+1)
For Example:
if n=3, then (2*3)C3/(3+1)
<br />
              6C3/4
<br />
              (6!/3!6!)/4
<br />
         --------Ans=5-------
<br />

<h2>The Time taken to search a key in a BST depends on the height of the BST, i.e., the time complexity lies between o(log n) and O(n)</h2>

<h2>Note: When u delete a node(root or any other random node) of a binary search tree then it is replaced by its inorder predecessor or inorder successor</h2>
