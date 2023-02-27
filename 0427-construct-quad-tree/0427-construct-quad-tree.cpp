/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    vector<Node *> leaves = vector<Node *>(2);
    Node* construct(vector<vector<int>>& grid) 
    {
        leaves[0] = new Node(false,true);
        leaves[1] = new Node(true, true);
        return helper(0, 0, grid.size(), grid);
    }
    Node *helper(int x, int y, int n, vector<vector<int>>&grid)
    {
        if (n==1) return leaves[grid[x][y]];
        Node *tl = helper(x, y, n/2, grid);
        Node *tr = helper(x, y+n/2, n/2, grid);
        Node *bl = helper(x+n/2, y, n/2, grid);
        Node *br = helper(x+n/2, y+n/2, n/2, grid);
        if (tl==tr && tl==bl && tl==br) return tl;
        return new Node(grid[x][y], false, tl, tr, bl, br);
    }
};