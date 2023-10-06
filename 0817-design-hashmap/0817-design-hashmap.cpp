class MyHashMap {
public:
    vector<vector<int>>v;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int flag=0;
        for(int i=0;i<v.size();i++){
            if(v[i][0]==key){
                flag=1;
                v[i][1]=value;
            }
        }
        
        if(flag==0) {
            vector<int>temp;
            temp.push_back(key);
            temp.push_back(value);
            v.push_back(temp);
        }

    }
    
    int get(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i][0]==key) return v[i][1];
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i][0]==key){
                v[i][1]=-1;
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

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */