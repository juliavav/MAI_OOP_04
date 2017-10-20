#ifndef TLISTITEM_H
#define	TLISTITEM_H

#include "Square.h"
#include "Rectangle.h"
#include "Trapeze.h"
#include <memory>

template <class T>
class TListItem {
public:
	TListItem(const std::shared_ptr<T> &figure);
	template <class A> friend std::ostream& operator<<(std::ostream& os, const TListItem<A>& obj);

	std::shared_ptr<TListItem<T>> SetNext(std::shared_ptr<TListItem<T>> next);
	std::shared_ptr<TListItem<T>> GetNext();
	std::shared_ptr<T> GetFigure();
	//Figure GetFigure() const;

	virtual ~TListItem();
private:
	std::shared_ptr<T> figure;
	std::shared_ptr<TListItem<T>> next;
};

#endif	/* TLISTITEM_H */