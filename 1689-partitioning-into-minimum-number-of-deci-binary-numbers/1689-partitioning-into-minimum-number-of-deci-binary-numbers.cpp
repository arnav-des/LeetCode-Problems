class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        for(int i=0;i<n.length();i++){
            m = max(m,(int)n[i]);
            if(m==9)
                break;
        }
        return m-48;
    }
};