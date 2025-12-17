#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class LinearQueue
{
private:
    int queue[100];
    int front, rear, size;

public:
    LinearQueue(int q)
    {
        size = q;
        rear = -1;
        front = -1;
    }

    void enqueue(int items)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full!!" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = items;
        cout << items << "is pushed into the queue!!!";
    }

    void dequeue()
    {
        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << queue[front] << "is deleted from the queue." << endl;
            front = front + 1;
        }

        if (front > rear)
        {
            front = rear = -1;
        }
    }

    void peek()
    {

        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << queue[front] << "is the first items present in the queue" << endl;
        }
    }

    void display()
    {

        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "The element present in the queue is:" << endl;
            for (int i = front; i <= rear; i++)
            {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }

    void summation()
    {

        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int sum = 0;
            for (int i = front; i <= rear; i++)
            {
                sum = sum + queue[i];
            }
            cout << "The summation of an elements inside the queue is: " << " " << sum << endl;
        }
    }

    void even_odd()
    {

        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                if (queue[i] % 2 == 0)
                {
                    cout << queue[i] << "is even" << endl;
                }
                else
                {
                    cout << queue[i] << "is odd" << endl;
                }
            }
        }
    }
};

int main()
{
    int size;
    cout << "Enter the size of the queue." << endl;
    cin >> size;

    LinearQueue q(size);

    int choice, items;

    while (true)
    {
        cout << "MENU: QUEUE operations" << endl;
        cout << "\n1. Enqueue()\n";
        cout << "\n2. Dequeue()\n";
        cout << "\n3. Peek()\n";
        cout << "\n4. Display()\n";
        cout << "\n5. Summation()\n";
        cout << "\n6. Even_Odd\n";
        cout << "\n7. Exit...\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to enqueue into the queue." << endl;
            cin >> items;
            q.enqueue(items);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.display();
            break;

        case 5:
            q.summation();
            break;

        case 6:
            q.even_odd();
            break;

        case 7:
            cout << "I am exiting from this program..." << endl;
            return 0;

        default:
            cout << "Invalid choices!!! please try again!!!" << endl;
            return 0;
        }
    }
}
