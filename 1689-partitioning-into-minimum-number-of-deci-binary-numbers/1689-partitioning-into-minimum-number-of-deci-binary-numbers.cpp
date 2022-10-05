class Solution {
public:
    int minPartitions(string n) {
        int m=0,flag=n.length();
        for(int i=0;i<flag;i++){
            m = max(m,(int)n[i]);
             if(m==57){
                break;
            }
        }
        return m-48;
    }
};