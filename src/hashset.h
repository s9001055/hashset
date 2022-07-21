#pragma once

class MyHashSet {
private:
    vector<bool> table;
public:
	vector<int> hashset;
    MyHashSet() : table(1e6 + 1, false) {}
    
    void add(int key) {
	//wei part
		if (contains(key))
            return ;
        hashset.push_back(key);
        
    }
    
    void remove(int key) {
	table[key] = false;
    }
    
    bool contains(int key) {
        // chia branch
        return table[key];
    }
};
