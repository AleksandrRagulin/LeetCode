class StockSpanner {
public:
    StockSpanner() {

    }

    int next(int price) {
        int ret = 1;

        if (!Stock.empty()){
            for(auto it = Stock.end() - 1; it >= Stock.begin() and price >= *it; it-- ){
                ret++;
            }
        }
        Stock.push_back(price);
        return ret;
    }
    vector<int> Stock;
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
