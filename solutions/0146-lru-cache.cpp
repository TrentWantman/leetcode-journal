// 146. LRU Cache
// Medium | Hash Table
// https://leetcode.com/problems/lru-cache/
// Time: O(1) | Space: O(1)

class LRUCache {
public:

    int capacity_;
    list<pair<int,int>> cache;
    unordered_map<int, list<pair<int,int>>::iterator> map;


    LRUCache(int capacity) : capacity_(abs(capacity)){}
    
    int get(int key) {
        if (map.find(key) != map.end()){
            cache.splice(cache.begin(), cache, map[key]);
            return map[key]->second;
        }
        else{
            return -1;
        }
    }
    
    void put(int key, int value) {
        if (map.find(key) != map.end()){
            map[key]->second = value;
            cache.splice(cache.begin(), cache, map[key]);
        }
        else{
            if (cache.size() == capacity_){
                int old_key = cache.back().first;
                cache.pop_back();
                map.erase(old_key);
            }
            cache.push_front({key, value});
            map[key] = cache.begin();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */