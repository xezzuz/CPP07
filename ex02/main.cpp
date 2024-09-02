/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:01:20 by nazouz            #+#    #+#             */
/*   Updated: 2024/09/01 17:21:56 by nazouz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int main() {
	Array<int>				int1(10);
	Array<int>				int2;
	
	
	std::cout << "<-------------- TEST I (Integers) -------------->" << std::endl;
	std::cout << "\n<-------------- CONSTRUCTORS -------------->" << std::endl;
	std::cout	<< "int1 size: " << int1.size() << std::endl
				<< "int2 size: " << int2.size() << std::endl; 

	for (size_t i = 0; i < int1.size(); i++)
		int1[i] = (i + 1) * 10;

	std::cout << "\n<-------------- COPY ASSIGNMENT -------------->" << std::endl;
	int2 = int1;
	int1.printContent();
	int2.printContent();

	std::cout << "\n<-------------- COPY CONSTRUCTOR -------------->" << std::endl;
	Array<int>				int3(int1);

	int1.printContent();
	int3.printContent();

	std::cout << "\n<-------------- DEEP COPY -------------->" << std::endl;
	int1[0] = 1;
	int2[0] = 2;
	int3[0] = 3;
	int1.printContent();
	int2.printContent();
	int3.printContent();
	
	Array<std::string>				string1(10);
	Array<std::string>				string2;
	
	
	std::cout << "\n\n<-------------- TEST II (Strings) -------------->" << std::endl;
	std::cout << "\n<-------------- CONSTRUCTORS -------------->" << std::endl;
	std::cout	<< "string1 size: " << string1.size() << std::endl
				<< "string2 size: " << string2.size() << std::endl; 

	for (size_t i = 0; i < string1.size(); i++) {
		std::string str(1, static_cast<char>(i + 65));
		string1[i] = str;
	}

	std::cout << "\n<-------------- COPY ASSIGNMENT -------------->" << std::endl;
	string2 = string1;
	string1.printContent();
	string2.printContent();

	std::cout << "\n<-------------- COPY CONSTRUCTOR -------------->" << std::endl;
	Array<std::string>				string3(string1);

	string1.printContent();
	string3.printContent();

	std::cout << "\n<-------------- DEEP COPY -------------->" << std::endl;
	string1[0] = "string1";
	string2[0] = "string2";
	string3[0] = "string3";
	string1.printContent();
	string2.printContent();
	string3.printContent();
	
	std::cout << "\n<-------------- OUT OF RANGE -------------->" << std::endl;
	try {
		int1[100] = 10;
	}
	catch (std::exception& err) {
		std::cout << "Exception Caught: " << err.what() << std::endl;
	}
	
	return 0;
}