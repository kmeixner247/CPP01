/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:00:25 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 15:50:22 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() 
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << "Memory address of string (&brain):\t\t" << &brain << std::endl;
	std::cout << "Memory address held by stringPTR (stringPTR):\t" << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF (&stringREF):\t" << &stringREF << std::endl;
	std::cout << "Value of string (brain):\t\t\t" << brain << std::endl;
	std::cout << "Value pointed to by stringPTR (*stringPTR):\t" << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF (stringREF):\t" << stringREF << std::endl;
}
