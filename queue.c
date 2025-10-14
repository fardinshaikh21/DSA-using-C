#include <stdio.h>
#define SIZE 5
int queue[SIZE], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue Overflow\n");
        return;
    }else{
        if(front == -1){
            front = 0; // Initialize front on first enqueue
        }
        real++;
        queue[rear] = value;  
        printf("Inserted : %d\n", value);
        
    }
    
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");
        return;
    }
    else{
        printf("Deleted : %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    for (int i = front + 1; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display(); // Output: 10 20 30
    dequeue();
    display(); // Output: 20 30
    return 0;
}