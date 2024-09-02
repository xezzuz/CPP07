/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:01:32 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/01 11:14:07 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T& x, T& y) {
	T		temp;

	temp = x;
	x = y;
	y = temp;
	return ;
}

template <typename T>
T&		min(T& a, T& b) {
	if (a == b)
		return b;
	return a > b ? b : a;
}

template <typename T>
T&		max(T& a, T& b) {
	if (a == b)
		return b;
	return a > b ? a : b;
}

#endif