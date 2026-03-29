// 622. Design Circular Queue
// Medium | Array
// https://leetcode.com/problems/design-circular-queue/
// Time: O(n) | Space: O(1)

class MyCircularQueue {
public:

    int* buffer = nullptr;
    int tail;
    int head;
    int size;
    int capacity;

    MyCircularQueue(int k) {
        buffer = new int[k];
        for (int i = 0;  i < k; i++){
            buffer[i] = -1;
        }
        tail = 0;
        head = 0;
        size = 0;
        capacity = k;
    }

    ~MyCircularQueue(){
        delete[] buffer;
    }
    
    bool enQueue(int value) {
        if(size != capacity){
            buffer[head] = value;
            head = (head + 1) % capacity;
            size++;
            return true;
        }
        else{
            return false;
        }
        
    }
    
    bool deQueue() {
        if (size == 0){ return false;}
        buffer[tail] = -1;
        tail = (tail + 1) % capacity;
        size--;
        return true;
    }
    
    int Front() {
        return buffer[tail];
    }
    
    int Rear() {
        return buffer[(head - 1 + capacity) % capacity];
    }
    
    bool isEmpty() {
        return (size == 0);
    }
    
    bool isFull() {
        return (size == capacity);
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