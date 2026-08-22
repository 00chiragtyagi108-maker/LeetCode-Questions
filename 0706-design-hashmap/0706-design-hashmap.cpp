class MyHashMap {
public:

    vector<pair<int , int >> mp;

    MyHashMap() {

    }
    
    void put(int key, int value) {
        for(auto &k: mp){
            if(k.first == key){
                k.second = value;
                return ;
            }
        }
        mp.push_back({key,value});
        
    }
    
    int get(int key) {
        for(auto k: mp){
            if(k.first == key){
                return k.second ;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->first == key){
                mp.erase(it);
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */