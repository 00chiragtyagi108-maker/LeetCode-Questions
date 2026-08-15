class MyHashSet {
public:

    vector <bool> Hash ;
    MyHashSet() {
        Hash.resize(1000001 , false);
    }
    
    void add(int key) {
        if(!contains(key)){
             Hash[key] = true ;
        }
    }
    
    void remove(int key) {
        if(contains(key)){
            Hash[key] = false;
        }
    }
    
    bool contains(int key) {
        return (Hash[key]);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */