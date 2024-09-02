/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:15:58 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/01 12:12:13 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void		print(T* array, size_t length) {
	for (size_t i = 0; i < length; i++) {
		std::cout << "[" << array[i] << "]";
	}
	std::cout << std::endl;
}

template <typename T, typename L, typename F>
void		iter(T* array, L length, F func) {
	for (L	i = 0; i < length; i++)
		func(array[i]);
}

#endif