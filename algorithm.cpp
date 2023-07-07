#include <iostream>
#include <string>
#include <iomanip>

class Stack {
    private:
        int top;
        int arr[5];
    
    public:
    Stack() {
        top = -1;
        for (size_t i = 0; i < 5; i++)
        {
            arr[i] = 0; 
        }
    }
    bool is_empty() {
        if (top == -1)
        {
            return true;
        }else{
            return false;
        } 
    }

    bool is_full() {
        if (top == 4)
        {
            return true;
        }else{
            return false;
        }
    }

    void push(int val) {
        if (this->is_full())
        {
            std::cout << "Stack Overflow1" << std::endl;
        }else{
            top += 1;
            arr[top] = val;
        }
        
    }
    int pop() {
        if (this->is_empty())
        {
            std::cout << "Stack Overflow2" << std::endl;
            return 0;

        }else {
            int popped_val = this->arr[top];
            this->arr[top] = 0;
            top -= 1;
            return popped_val;
        } 
    }

    int count() {
        return (top + 1);
    }

    int peek(int pos) {
        if (this->is_empty())
        {
            std::cout << "Stack Overflow3" << std::endl;
            return 0;
        }else{
            return this->arr[pos]; 
        }
        
    }

    void change(int pos, int val) {
        arr[pos] = val;
        std::cout << "Value changed at position" << pos << std::endl;
    }
    void display() {
        std::cout << "All values in the stack are" << std::endl;
        for (size_t i = 0; i < 4; i++)
        {
            std::cout << arr[i] << std::endl;
        }
        
    }
};


class Queue {
    private:
        int arr[4];
        int rear;
        int front;
        Queue(){
            for (size_t i = 0; i < 4; i++)
            {
                arr[i] = 0;
                rear = -1;
                front = -1;
            }
            
        }
    public:
        bool is_empty(){
            if (rear == -1 && front == -1)
            {
                return true;
            }else{
                return false;
            }
            
        }
        bool is_full(){
            if (rear == std::size(arr) -1)
            {
                return true;
            }else{
                return false;
            }
            
        }
        void enqueue(int val){
            if (this->is_full())
            {
                std::cout << "Array is filled up cannot add another" << std::endl;
            }else if (this->is_empty())
            {
                rear = front = 0;
            }else
            {
                rear++;
            }
            arr[rear] = val;
            
        }
        int dequeue() {
            int x;
            if (this->is_empty())
            {
                std::cout << "Array val is empty" << std::endl;
                return 0;
            }else if (rear == front)
            {
               x = arr[front];
               rear = front = -1;
            }else{
                x = arr[front];
                front++;
            }
            return x;
            
        }
};

int main() {
    Stack s1;
    int option, position, value;

    do
    {
        std::cout<<"What operation do you want to perform? Select Option number. Enter to exit."<<std::endl;
        std::cout<<"1. Push"<<std::endl;
        std::cout<<"2. Pop"<<std::endl;
        std::cout<<"3. is Empty()"<<std::endl;
        std::cout<<"4. isFull()"<<std::endl;
        std::cout<<"5. peek () "<<std::endl;
        std::cout<<"6. count()"<<std::endl;
        std::cout<<"7. change () "<< std::endl;
        std::cout<<"8. display() "<< std::endl;
        std::cout << "9. Clear Screen"<< std::endl << std::endl;

        std::cin >> option;
        switch (option)
        {
        case 1:
            std::cout << "Enter an item to push in the stack" << std::endl;
            std::cin >> value;
            s1.push(value);
            break;
        case 2:
            std::cout << "Pop function called - Poped Value"<<  s1.pop() << std::endl;
            
        case 3:
            if (s1.is_empty())
            {
               std::cout << "Stack is empty" << std::endl;
            }else{
                std::cout << "Stack is not empty" << std::endl;
            }
            break;
        case 4:
            if (s1.is_full())
            {
               std::cout << "Stack is full" << std::endl;
            }else{
                std::cout << "Stack is not full" << std::endl;
            }
            break;
        case 5:
               std::cout << "Enter the position you want to peak" << std::endl;
               std::cin >> position;
               std::cout << "Peak function called - Value at position: "<< s1.peek(position) << std::endl;
            break;
        case 6:
               std::cout << "Count function called - Numbers of items in the stack are: "<< s1.count() << std::endl;
            break;
        case 7:
               std::cout << "Change function called -  " << std::endl;
               std::cout << "Enter position of item you want to change : "<< std::endl;
               std::cin >> position;
               std::cout << std::endl;
               std::cout << "Enter the value of item you want to change : " << std::endl;
               std::cin >> value;
               s1.change(position, value);
            break;
        case 8:
                std::cout << "Display function called "<< std::endl;
                s1.display();
            break;

        case 9:
                system("clear");
            break;
        default:
            std::cout << "Enter a proper option number"<< std::endl;
            break;
        }

    } while (option != 0);
    
    return 0;
}