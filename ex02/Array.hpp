/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:55:43 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/01 16:34:29 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		T*			arr;
		size_t		arrSize;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& original);
		Array<T>&	operator=(const Array<T>& original);
		~Array();
	
		void		printContent() const;
		size_t		size() const;

		T&	operator[](int index);
};

template <typename T>
Array<T>::Array() {
	arr = new T[0];
	arrSize = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	arr = new T[n];
	arrSize = n;
}

template <typename T>
Array<T>::Array(const Array<T>& original) {
	arrSize = original.arrSize;
	arr = new T[arrSize];
	for (size_t i = 0; i < arrSize; i++)
		arr[i] = original.arr[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& original) {
	if (this != &original) {
		arrSize = original.arrSize;
		if (arr)
			delete[] arr;
		arr = new T[arrSize];
		for (size_t i = 0; i < arrSize; i++)
			arr[i] = original.arr[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array() {
	if (arr)
		delete[] arr;
}

template <typename T>
void		Array<T>::printContent() const {
	for (size_t	i = 0; i < arrSize; i++)
		std::cout << "[" << arr[i] << "]";
	std::cout << std::endl;
}

template <typename T>
size_t		Array<T>::size() const {
	return arrSize;
}

template <typename T>
T&			Array<T>::operator[](int index) {
	if (index < 0 || index >= static_cast<int>(arrSize))
		throw std::out_of_range("Index out-of-bounds");
	return arr[index];
}

#endif