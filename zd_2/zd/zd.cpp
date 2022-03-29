#include <iostream>
using namespace std;

template <class T>
class Set
{
private:
    unsigned int size;
    unsigned int* array;

    unsigned int size_1;
    
public:
    Set() { size = 0; array = new unsigned int[size]; } // конструктор

    Set(int s) {
        size = s; 
        array = new unsigned int[size]; // конструктор с аргументами
        for (unsigned i = 0; i < size; i++)
            array[i] = 0;
    }

    Set(const Set& ob) // конструктор копии
    {
        cout << "конструктор копии" << endl;
        size = ob.size;
        array = new unsigned  int[size];
        for (unsigned int i = 0; i < size; i++)
            array[i] = ob.array[i];
    }

    ~Set() { delete[] array; }  // деструктор
    void Enter(); // ввод
    void Show(); // вывод
    void Union(Set<T>, Set<T>); // объединение
    void add(); // добавка элемента
    void extract();
    void operator = (Set<T>); // перегрузки

    T operator [] (int i);
    void operator ->();
  
    Set<T> operator +(const Set<T>& var);

};
template <class T>
void Set<T>::Enter()
{
    cout << "Введите размер " << endl;
    cin >> size;
    array = new  unsigned int [size];
    for (int i = 0; i < size; i++)
    {
        cout << "Введите элемент " << i + 1 << ")   ";
        cin >> array[i];
    }



}
template <class T>
void Set<T>::Show()
{
    cout << "Множество " << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
template <class T>
void Set<T>::Union(Set<T> a, Set<T> b)
{
    cout << "sizee= " << a.size;
    this->size = a.size + b.size;
    this->array = new unsigned int[size];
    unsigned i, j, count = 0;
    unsigned int n = a.size;


    for (i = 0; i < a.size; i++)
        array[i] = a.array[i];

    for (i = 0; i < b.size; i++)
    {
        for (j = 0; j < a.size; j++)
            if (b.array[i] == a.array[j])
                continue;
            else
                count++;
        if (count == a.size)
            array[n++] = b.array[i];
        count = 0;
    }
    size = n;
}


template <class T>
void Set<T>::add()
{
    int a[100];
    unsigned int i;
    int element;
    for (i = 0; i < size; i++)
        a[i] = array[i];
    delete[] array;
    size = size + 1;

    cout << "Введите новый элемент " << endl;
    cin >> element;
    a[i] = element;

    array = new unsigned int[size];
    for (i = 0; i < size; i++)
        array[i] = a[i];
}

template <class T>
void Set<T>::extract()
{
    int number, n, i, j;
    n = size;
    cout << "Введите номер элемента от 0 до " << size - 1 << endl;
    cin >> number;

    if (number < 0 || number > size)
        cout << "Ошибка " << endl;
    else
    {
        for (i = 0; i < n; i++)
        {
            if (i == number)
            {
                for (j = i; j < n - 1; j++)
                    array[j] = array[j + 1];
                n--;
            }

        }
        size--;
    }
}


template <class T>
void Set<T>::operator = (Set<T> a)
{
    unsigned int i;
    delete[] this->array;

    this->size = a.size;
    this->array = new unsigned int[size];
    for (i = 0; i < size; i++)
        array[i] = a.array[i];

}

template <class T>
Set<T> Set<T>::operator +(const Set<T>& var)
{
    Set<T> res = Set<T>();
    
    //res = var;
    size_t i = 0;
    while (array[i] != '\0')
    {
        cout << "array= " << array[i] << endl;

        i++;
    }
   
   
    
    return res;

}



int main()
{
    setlocale(LC_CTYPE, "Russian");
    Set<int> a;
    cout << "Ввод и вывод 1 множества " << endl;
    a.Enter();
    a.Show();
    Set<int> b;
    cout << "Ввод множества 2 " << endl;
    b.Enter();
    Set<int> c;
    cout << "Объединение множеств " << endl;
    c.Union(a, b);
    c.Show();
    cout << "Добавка элемента " << endl;
   c.add();
  c.Show();
  cout << "Извлечение " << endl;
  c.extract();
  c.Show();

 
   
}

