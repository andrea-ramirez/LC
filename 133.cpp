/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
        map<int,Node*> m;
        Node* cloneGraph(Node* node){
            if(node == nullptr){
                return nullptr;
            }
            
            if(!m.count(node->val)){
                Node* newNode = new Node(node->val);
                m[node->val] = newNode;
                vector<Node*> toClone;
                

                for(int i = 0; i < node->neighbors.size(); i++){
                    toClone.push_back(cloneGraph(node->neighbors[i]));
                }
                
                newNode->neighbors = toClone;
            }
            
            return m[node->val];
    }
};
