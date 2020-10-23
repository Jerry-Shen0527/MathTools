#include <Basic/Matrix.h>

template <typename T, int M, int N>
Matrix<T, M, N>::Matrix(T v)
{
}

template <typename T, int M, int N>
T& Matrix<T, M, N>::operator()(int i, int j)
{
	return i * N + j;
}

template <typename T, int M, int N>
const T& Matrix<T, M, N>::operator()(int i, int j) const
{
	return const_cast<Matrix>(*this)(i, j);
}