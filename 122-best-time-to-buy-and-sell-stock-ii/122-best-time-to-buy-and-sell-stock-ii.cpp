class Solution {
public:
    int maxProfit(vector<int>& prices) {
    /*int sd=0;//selling day
    int bd=0; //buying day
    int profit=0;
    
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]>prices[i-1])
        {
            sd++;
        }
        else
        {
            profit+=prices[sd]-prices[bd];
            sd=bd=i;
        }
    }
    
    profit+=prices[sd]-prices[bd];
    return profit;*/
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                profit+=(prices[i]-prices[i-1]);
            }
        }
        return profit;
}
};