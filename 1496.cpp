class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> s;
        int x = 0;
        int y = 0;
        
        s.insert(pair<int, int>(0,0));
        
        for(int i = 0; i < path.length(); i++){
            switch(path[i]){
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
                default:
                    break;
            }
            
            if(s.count(pair<int, int>(x,y))){
                    return true;
            }else{
                s.insert(pair<int, int>(x,y));
            }
        }
        
        return false;
    }
};
