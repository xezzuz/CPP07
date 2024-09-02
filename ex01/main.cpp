/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:18:07 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/01 12:11:55 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void		toUpperCase(char& c) {
	if (c >= 97 && c <= 122)
		c = c - 32;
	return ;
}

void		incByOne(int& n) {
	n++;
}

int main() {
	std::string			array1 = "abc";
	int					array2[] = {0, 1, 2, 3, 4};

	std::cout << "Original array1: ";
	::print(&array1[0], 3);

	::iter(&array1[0], 3, toUpperCase);
	std::cout << "Modified array1: ";
	::print(&array1[0], 3);

	std::cout << "Original array2: ";
	::print(&array2[0], 5);

	::iter(&array2[0], 5, incByOne);
	std::cout << "Modified array2: ";
	::print(&array2[0], 5);
}