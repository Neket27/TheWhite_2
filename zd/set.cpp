#include "set.h"



template <class T>
void Set<T>::Enter()
{
    cout << "Введите размер " << endl;
    cin >> size;
    Node<T>* node = new Node<T>[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Введите элемент " << i + 1 << ")   ";
        cin >> node[i];
    }   
    node->setArray(node);

}

template <class T>
void Set<T>::Show()
{
    Node<T>* node = new Node<T>[size];
    node->getArray();
    cout << "Множество " << endl;
    for (int i = 0; i < size; i++)
        cout << node[i] << " ";
    cout << endl;
}


