class LRUCache {
public:
    map<int, int> hashMap;
    map<int, list<int>::iterator> iteratorMap;
    list<int> lruList;
    int capacity;
    
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if (hashMap.find(key) == hashMap.end()) return -1;
        lruList.erase(iteratorMap[key]);
        lruList.push_front(key);
        iteratorMap[key] = lruList.begin();
        return hashMap[key];
    }
    
    void put(int key, int value) {
        if (hashMap.find(key) == hashMap.end()) {
            hashMap[key] = value;
            lruList.push_front(key);
            iteratorMap[key] = lruList.begin();
            if ((int)hashMap.size() > capacity) {
                int keyToDelete = lruList.back();
                hashMap.erase(keyToDelete);
                iteratorMap.erase(keyToDelete);
                lruList.pop_back();
            }
        } else {
            hashMap[key] = value;
            lruList.erase(iteratorMap[key]);
            lruList.push_front(key);
            iteratorMap[key] = lruList.begin();
        }
    }
};