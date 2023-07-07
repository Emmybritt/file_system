#include <iostream>
#include <string>
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
