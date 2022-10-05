class Solution {
public:
    int minPartitions(string n) {
        int i,len=n.length(),maxi=0;
        for(i=0;i<len;i++) {
            maxi=max(maxi,(int)n[i]);
            if(maxi==57) {
                break;
            }
        }
        return maxi-48;
    }
};