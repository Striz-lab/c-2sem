#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

struct stack {
    int a[1000];
    int head = -1;   //Индекс крайнего элемента.

    void push(int x) {
        head++;
        a[head] = x;
    }

    int pop() {
        if (head != -1) {
            head--;
            return a[head + 1];
        } else {
            //Ошибка, попытка извлечь элемент из пустого стека.
        }
    }

    bool is_empty() {
        return head == -1;
    }
};


struct queue {
    int a[1000];

    //Для более лаконичной реализации работы, мы будем
    //хранить указатель не на последний элемент, а
    //на следующий за ним (несуществующий).

    //Это, в частности, позволит нам проверять очередь на пустоту
    //простым условием head == tail
    int head = 0;    //Индекс первого элемента.
    int tail = 0;    //Индекс элемента, следующего за последним.

    void push(int x) {
        a[tail] = x;
        tail++;
    }

    int pop() {
        if (head != tail) {
            head++;
            return a[head - 1];
        } else {
            //Ошибка, попытка извлечь элемент из пустой очереди.
        }
    }

    bool is_empty() {
        return head == tail;
    }
};


int main(){
    
    vector<int> v(10);
    
    cout << v.size << endl;
    
    v.push_back(19); //добавить элемент в конец
    v.pop_back(); //удалить конец
    v.begin(); //указатель на начало
    v.end(); //указатель на конец
    v.sort(v.begin, v.end);  //сортировка
    
    //доступ к произв элементу -- О(1), удалить все элементы -- О(n)
    
    return 0;
}
