#include "node.h"
template <typename T>
void Node<T>::setArray(Node* newArray)
{
    int i = 0;
    while (newArray != '\0') {
        array[i] = newArray[i];
    }

}
template <typename T>
Node Node<T>:: *getArray() const
{
    return array;
}

template <typename T>
istream& operator >>(istream& in, Node<T>& str)
{
    T s;
    in >> s;
    int i = 0;
    for (auto x : s) {
        array[i] = str.array;
        i++;
    }
    return in;
}

template <typename T>
ostream& operator <<(ostream& out, const Node<T>& str)
{
    for (auto x : str.array)
        out << x;
    return out;
}