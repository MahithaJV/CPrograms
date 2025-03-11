#include <stdio.h>

struct queue {
    int item[6];
    int front;
    int rear;
};

// Insertion
void enqueue(struct queue *q, int x) {
    if (q->rear == 5) {
        printf("Queue Overflow\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear++;
        q->item[q->rear] = x;
    }
}

// Deletion
int dequeue(struct queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        printf("Queue Underflow\n");
        return -1;
    } else {
        int y = q->item[q->front];
        printf("%d is deleted\n", y);
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        } else {
            q->front++;
        }
        return y;
    }
}

int main() {
    struct queue q;
    q.front = -1;
    q.rear = -1;

    enqueue(&q, 23);
    dequeue(&q);
    enqueue(&q, 45);

    for (int i = q.front; i <= q.rear; i++)
        printf("%d   ", q.item[i]);

    return 0;
}