class LRUCache {
public:
    int size;
    list<int> l;
    unordered_map<int, pair<list<int>::iterator, int>> m;
    
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if(m.count(key)){ 
            // if key is present
            bringFront(key);
            return m[key].second;
        }
        // if key is not present
        return -1;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){ 
            // key is present
            m[key].second = value;
            bringFront(key);
        }
        else{ 
            // key is not present
            if(l.size()==size){ 
                // linked list is full
                m.erase(l.back());
                l.pop_back();
            }
            
            l.push_front(key);
            m[key] = make_pair(l.begin(), value);
        }
    }
    
    void bringFront(int key){
        l.erase(m[key].first);
        l.push_front(key);
        m[key].first = l.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */