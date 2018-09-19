//
//  LinkList.hpp
//  c++
//
//  Created by xczhw on 2018/9/13.
//  Copyright © 2018年 xczhw. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <stdio.h>

#endif /* LinkList_hpp */
#include "LinkListNode.hpp"
template <class T>
class LinkList
{
protected:
	LinkListNode<T> *head;
	LinkListNode<T> *tail;
public:
	void remove(LinkListNode<T> *x);
	void push_front(T x);
	void push_back(T x);
	void pop_front();
	void pop_back();
	bool empty();
};

// 啊……这个remove写的真是丑陋
template <class T>
void LinkList<T>::remove(LinkListNode<T> *x)
{
	if(head == x)
	{
		head = x -> next;
		goto del;
	}
	if(tail == x)
	{
		tail = x -> front;
		goto del;
	}
	x -> last -> next = x -> next;
	x -> next -> last = x -> last;
del:
	delete x;
	return;
}

template <class T>
void LinkList<T>::push_front(T x)
{
	head = new LinkListNode<T>(x, nullptr, head);
	return;
}

template <class T>
void LinkList<T>::push_back(T x)
{
	tail = new LinkListNode<T>(x, tail, nullptr);
	return;
}

template <class T>
void LinkList<T>::pop_front()
{
	if(tail == head)
	{
		remove(head);
		head = tail = nullptr;
		return;
	}
	LinkList<T> *tmp = head -> next;
	remove(head);
	head = tmp;
	return;
}

template <class T>
void LinkList<T>::pop_back()
{
	if(tail == head)
	{
		remove(tail);
		head = tail = nullptr;
		return;
	}
	LinkList<T> *tmp = tail -> last;
	remove(tail);
	tail = tmp;
	return;
}

template <class T>
bool LinkList<T>::empty()
{
	return head == tail && head == nullptr;
}
