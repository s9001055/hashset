#pragma once

class MyHashSet {
private:
    vector<bool> table;
public:
    MyHashSet() : table(1e6 + 1, false) {}
    
    void add(int key) {
        
    }
    
    void remove(int key) {
	table[key] = false;
    }
    
    bool contains(int key) {
        // chia branch
        return table[key];
    }
};
