//
//  Queue.hpp
//  c++
//
//  Created by xczhw on 2018/9/13.
//  Copyright © 2018年 xczhw. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include "LinkList.hpp"
#endif /* Queue_hpp */

template <class T>
class Queue: protected LinkList<T>
{
public:
	void push(T x);
	void pop();
	bool empty();
	T front();
};

template <class T>
void Queue <T>::push(T x)
{
	//this -> push_back(x);
	return;
}

template <class T>
void Queue <T>::pop()
{
	this -> pop_front();
	return;
}

template <class T>
T Queue <T>::front()
{
	return this -> head -> data;
}

template <class T>
bool Queue <T>::empty()
{
	return this -> LinkList<T>::empty();
}
