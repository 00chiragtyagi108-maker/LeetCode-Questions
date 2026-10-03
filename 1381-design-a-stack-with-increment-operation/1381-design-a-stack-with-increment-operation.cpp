class CustomStack {
public:

    int maxsize ;
    vector<int> v ;
    
    CustomStack(int maxSize) {
        this -> maxsize = maxSize ;
        
    }
    
    void push(int x) {
        if(v.size() < maxsize) {
            v.push_back(x) ;
        }
    }
    
    int pop() {
        if(v.size() > 0) {
            int p = v.back() ;
            v.pop_back() ;
            return p ;
        }
        return -1 ;
    }
    
    void increment(int k, int val) {
        if(v.size() <= k) {
            for(auto &i : v) {
                i = i + val ;
            }
        }
        else {
            for(int i = 0;i < k;i++){
                v[i] += val ;
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */