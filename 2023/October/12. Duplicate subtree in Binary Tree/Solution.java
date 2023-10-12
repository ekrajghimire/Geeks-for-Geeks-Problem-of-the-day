// Duplicate subtree in Binary Tree
// October 12, 2023
// Java Code

class Solution {
    
    HashMap<String, Integer> map;
    int dupSub(Node root) {
        map = new HashMap<>();
        dfs(root);
        
        for (Map.Entry<String, Integer> set : map.entrySet()) {
             if(set.getValue() > 1) return 1;
        }
        
        return 0;
    }
    
    String dfs(Node node){
        if(node == null) return "$";
        
        String l = dfs(node.left);
        String r = dfs(node.right);
        
        String s =  l + "-" + node.data + "-" + r;
        
        // count subtree having size greater than one
        if(node.left != null && node.right != null){
            map.put(s, map.getOrDefault(s, 0) + 1);
        }
        
        return s;
    }
}
