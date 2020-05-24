#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;


int main(){
    
    list<double> A;
    list<double>::iterator it;
    for(it=A.begin(); it!=A.end(); it++)
    {
         sum+=(*it); //доступ к элементам по итератору
    }
    
    
    for (const auto &i:one_arr)
        cout << i << '\n'; //for C++11
    cout << '\n';
    
    return 0;
}
/*
 Создание списка

 list<int> A
  — создание пустого списка для хранения элементов типа int.
 list<int> A(n, value)
  Cоздается список из n элементов со значением value.
 Некоторые методы класса list

 front()
  — первый элемент списка
 back()
  — последний элемент списка
 push_back(value)
  — добавляет элемент в конец списка
 push_front(value)
  — добавляет элемент в начало списка
 insert(it, value)
  — вставка некоторого значения value перед it
 insert(i, n, value)
  — вставка n копий элементов со значением value перед i
 pop_front()
  — удаляет первый элемент списка
 pop_back()
  — удаляет последний элемент (не возвращает значение!)
 erase(it)
  — удаляет элемент, на который указывает данный итератор
 erase(start, fin)
  — удалению подлежат все элементы между start и fin, но fin не удаляется.
 clear()
  — удаляет все элементы списка
 size()
  — выдает количество элементов списка
 empty()
  — возвращает истину, если вызывающий список пуст

 */
