#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfitValue) {
            maxProfitValue = profit;
        }
    }

    return maxProfitValue;
}

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};

    cout << "Test 1: " << maxProfit(prices1) << endl;

    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << "Test 2: " << maxProfit(prices2) << endl;

    return 0;
}