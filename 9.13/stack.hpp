//
//  Stack.hpp
//  c++
//
//  Created by xczhw on 2018/9/14.
//  Copyright © 2018年 xczhw. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include "LinkList.hpp"

#endif /* Stack_hpp */
template <class T>
class Stack: protected LinkList<T>
{
public:
	void push(T x);
	void pop();
	bool empty();
	T top();
};

template <class T>
void Stack<T>::push(T x)
{
	this -> push_front(x);
	return;
}

template <class T>
void Stack<T>::pop()
{
	this -> pop_front();
	return;
}

template <class T>
T Stack<T>::top()
{
	return this -> head -> data;
}
