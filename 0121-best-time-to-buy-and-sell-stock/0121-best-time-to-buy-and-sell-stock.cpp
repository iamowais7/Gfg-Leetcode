class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int min=prices[0];
      int maxprofit=0;
       for(int i=1;i<prices.size();i++){
          if(min>prices[i]){
              min=prices[i];}
          else {
              int currentprofit= prices[i]-min;
              if(currentprofit>maxprofit){
                  maxprofit=currentprofit;}   }
       }
 return maxprofit;   }         
};