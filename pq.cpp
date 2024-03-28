#include <iostream>
#include <vector>
using namespace std;
class PriorityQueue {
private:
    vector<int> heap;

    // Helper function to maintain heap property
    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[parent] < heap[index]) {
                swap(heap[parent], heap[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Helper function to maintain heap property
    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }

        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }

        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Constructor
    PriorityQueue() {}

    // Function to insert an element into the priority queue
    void push(int value) {
        heap.push_back(value);
        heapifyUp(heap.size() - 1);
    }

    // Function to remove and return the element with the highest priority
    int pop() {
        if (isEmpty()) {
            std::cerr << "Priority Queue is empty!\n";
            return -1; // Assuming -1 is not a valid element in the queue
        }
 
        int front = heap[0];
        swap(heap[0], heap.back());
       
        heap.pop_back();
        heapifyDown(0);

        return front;
    }

    // Function to check if the priority queue is empty
    bool isEmpty() const {
        return heap.empty();
    }

    // Function to get the size of the priority queue
    size_t size() const {
        return heap.size();
    }
int top(){
    return heap[0];
}
    // Function to print the elements of the priority queue
    void print() const {
    cout << "Priority Queue: ";
        for (int element : heap) {
            cout << element << " ";
        }
    cout << "\n";
    }
};

int main() {
    PriorityQueue pq;

    pq.push(5);
    pq.push(10);
    pq.push(3);
    pq.push(7);

    pq.print(); // Output: 10 7 3 5
cout<<"Top: "<<pq.top()<<"\n";
    cout << "Dequeue: " << pq.pop() << "\n";
    cout << "Dequeue: " << pq.pop() << "\n";

    pq.print(); // Output: 7 5

    return 0;
}
