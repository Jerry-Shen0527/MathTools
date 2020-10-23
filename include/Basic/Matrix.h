#pragma once
#include <memory>

template<typename T, int M, int N>
class Matrix
{
public:
	explicit Matrix(T v);

	//calculation

	//slicing
	T& operator() (int i, int j);
	const T& operator() (int i, int j) const;

private:

	std::unique_ptr<T> data;
};

