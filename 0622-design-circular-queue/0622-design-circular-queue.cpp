class MyCircularQueue {
public:
    vector<int> queue;
    int capacity;;
    MyCircularQueue(int k) {
        capacity=k;
    }
    
    bool enQueue(int value) {
        if(queue.size() ==capacity){
            return false;
        }
        else{
            queue.push_back(value);
            return true;
        }
    }
    
    bool deQueue() {
        if(queue.size() == 0){
            return false;
        }
        else{
            queue.erase(queue.begin());
            return true;
        }
    }
    
    int Front() {
        if(queue.empty()){
            return -1;
        }
        else{
            return queue.front();
        }
    }
    
    int Rear() {
        if(queue.empty()){
            return -1;
        }
        else{
            return queue.back();
        }
    }
    
    bool isEmpty() {
        if(queue.empty()){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isFull() {
        if(queue.size() == capacity){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */