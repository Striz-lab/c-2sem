#include <iostream>
#include <string>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

struct Employee
{
    short id;
    int age;
    double salary;
};
/* объявление указателя на структуру

person;

struct bal *p;
p = &регson;
помещает адрес структуры person в указатель р.

Для доступа к членам структуры с помощью указателя на структуру следует использовать оператор "стрелка". Оператор "стрелка", ->, образован из знака "минус" и символа "больше". Например, для доступа к члену balance с помощью p следует написать:

p->balance
 */

int main(){
    
    Employee john;
    john.id = 8;
    john.age = 27;
    john.salary = 32.17;
     
    Employee james;
    james.id = 9;
    james.age = 30;
    james.salary = 28.35;
    
    int totalAge = john.age + james.age;
     
    if (john.salary > james.salary)
        cout << "John makes more than James\n";
    else if (john.salary < james.salary)
        cout << "John makes less than James\n";
    else
        cout << "John and James make the same amount\n";
     
   
    james.salary += 3.75;
     
    // Сегодня день рождения у John-а
    ++john.age;
    
    //размер структуры -- сумма размеров ее элементов (выравнивание данных); у этой 2+4+4 = 12 -> 16 person;

     

    

    

    
    return 0;
}


// Устойчивая (стабильная) сортировка — сортировка, которая не меняет относительный порядок сортируемых элементов, имеющих одинаковые ключи, по которым происходит сортировка.
