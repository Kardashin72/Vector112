#pragma once
#include <iostream>

using namespace std;

class Vector112 {
	int* arr = nullptr;
	int len = 0;
public:
	Vector112() = default;
	Vector112(int len, int val = 0);
	Vector112(const int* arr, int size);
	
	//семантика копирования
	Vector112(const Vector112& vec);
	Vector112& operator=(const Vector112& vec);
	~Vector112();

	//семантика перемещения
	Vector112(Vector112&& vec);
	Vector112& operator=(Vector112&& vec);

	//добавить элемент в конец массива
	void push_back(int val);
	//удалить последний элемент массива
	void pop_back();
	//добавить элемент в начало массива
	void push_front(int val);
	//удалить первый элемент массива
	void pop_front();
	//вывод массива на экран
	void print() const;
	//вывод максимального элемента
	void printMaxElem() const;
	//вывод минимального элемента
	void printMinElem() const;
	//вставить элемент val в позицию index
	void insert(int index, int val);
	//удалить элемент в указанном index
	void erase(int index);
	//удалить все вхождения значения val
	void remove(int val);
	//возвращает размер массива
	inline int size() const { return this->len; }
	//очистить массив
	void clear();
	//проверить на nullptr
	bool empty() const;
	//вернуть элемент по индексу
	int operator[](int index) const;
	int& operator[](int index);
	//любой_тип operator операция (любой_тип)
	friend ostream& operator<<(ostream& out, const Vector112& arr);
	friend istream& operator>>(istream& out, Vector112& arr);
};

