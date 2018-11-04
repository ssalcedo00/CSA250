#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
	Node() : prev(nullptr), next(nullptr) {}
	Node(const T& newData, Node<T> *newPrev, Node<T> *newNext)
		: data(newData), prev(newPrev), next(newNext) {}
	T getData() const { return data; }				
	Node<T> *getPrev() const { return prev; }
	Node<T> *getNext() const { return next; }
	void setData(const T& newData) { data = newData; }
	void setPrev(Node<T> *newPrev) { prev = newPrev; }
	void setNext(Node<T> *newNext) { next = newNext; }
	~Node() {}
private:
	T data;
	Node<T> *prev;
	Node<T> *next;
};

template <typename T>
class DoublyList
{
	template <typename T>
	friend ostream& operator<<(ostream& out, const DoublyList<T>& aList);
public:
	DoublyList(); 
		
	void insert(int elem);

	int firstElem() const;

	bool isEmpty() const;

	void destroyList();
	~DoublyList();	

private:
    Node<T> *first;	
    Node<T> *last;		
	int count;
};

#endif