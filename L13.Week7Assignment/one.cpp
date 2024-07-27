#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std; 

void findMaxProfit(vector<int>&prices, int &maxProfit, int i, int j){
    //base case
    if(i>=prices.size()){
        return;
    }

    
    if(j<prices.size() && prices[i] < prices[j]){
        maxProfit = max(prices[j]-prices[i], maxProfit);
    }
    if(j >= prices.size()){
        i++, j=j+i;
        findMaxProfit(prices, maxProfit, i, j);
    }
    else{
        findMaxProfit(prices, maxProfit, i, j++);
    }
}

int main() {
    vector<int>prices = {7,6,4,3,1};
    int maxProfit = 0;
    int i = 0;
    int j = i+1;

    findMaxProfit(prices, maxProfit, i, j);

    cout<<maxProfit;
   


}