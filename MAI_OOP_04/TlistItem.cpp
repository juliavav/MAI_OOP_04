#include "TListItem.h"
#include <iostream>

template <class T>
TListItem<T>::TListItem(const std::shared_ptr<T> & figure) {
	this->figure = figure;
	this->next = nullptr;
	//std::cout << "List item: created" << std::endl;
}


template <class T>
std::shared_ptr<TListItem<T>>TListItem<T>::SetNext(std::shared_ptr<TListItem<T>> next) {
	std::shared_ptr<TListItem<T>> old = this->next;
	this->next = next;
	return old;
}

template <class T>
std::shared_ptr<TListItem<T>> TListItem<T>::GetNext() {
	return this->next;
}

template <class T>
std::shared_ptr<T> TListItem<T>::GetFigure()
{
	return this->figure;
}

template <class T>
TListItem<T>::~TListItem() {
}

template <class T>
std::ostream& operator<<(std::ostream& os, const TListItem<T>& obj) {
	os << "[" << obj.figure << "]";//<< std::endl;
	return os;
}


#include "Figure.h"
template class TListItem<Figure>;
template std::ostream& operator<<(std::ostream &out, const TListItem<Figure> &obj);