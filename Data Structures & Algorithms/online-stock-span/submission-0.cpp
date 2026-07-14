class StockSpanner {
    stack<int> st1,st2;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int a=1;
        while(!st1.empty() && st1.top()<=price){
            a++;
            st2.push(st1.top());
            st1.pop();
        }
        while(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
        }
        st1.push(price);
        return a;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */