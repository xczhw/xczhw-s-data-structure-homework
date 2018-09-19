//
//  LinkListNode.hpp
//  c++
//
//  Created by xczhw on 2018/9/13.
//  Copyright © 2018年 xczhw. All rights reserved.
//

#ifndef LinkListNode_hpp
#define LinkListNode_hpp

#include <stdio.h>

#endif /* LinkListNode_hpp */
template <class T>
class LinkListNode
{
	T data;
	LinkListNode *next;
	LinkListNode(T data, LinkListNode *last, LinkListNode *next);
};

template <class T>
LinkListNode<T>:: LinkListNode(T data, LinkListNode *last, LinkListNode *next)
{
	this -> data = data;
	this -> last = last;
	this -> next = next;
}
