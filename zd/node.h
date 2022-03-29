#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

template <class T>
class Node
{
public:
    Node *getArray() const;
    void setArray(Node* newArray);
    friend ostream& operator <<(ostream& out, const Node<T>& str);
    friend istream& operator >>(istream& in, Node<T>& str);


private:
 Node *array;

};
template <typename T>
ostream& operator <<(ostream& out, const Node<T>& str);
template <typename T>
istream& operator >>(istream& in, Node<T>& str);


#endif