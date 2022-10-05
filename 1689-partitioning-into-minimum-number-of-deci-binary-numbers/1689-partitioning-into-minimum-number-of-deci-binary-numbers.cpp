class Solution {
public:
    int minPartitions(string n) {
        int m=0,flag=0;
        for(int i=0;i<n.length();i++){
            int l=(int)n[i]-48;
            if(l==9){
                flag=1;
                break;
            }
            m = max(m,(int)n[i]);
            
        }
        if(flag==1)
            return 9;
        return m-48;
    }
};