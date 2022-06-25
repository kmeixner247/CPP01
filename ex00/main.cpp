/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:05:33 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 16:52:49 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *newZ;
	std::cout << "--------------------------------" << std::endl;
	newZ = newZombie("Trump");
	std::cout << "--------------------------------" << std::endl;
	randomChump("Donald");
	std::cout << "--------------------------------" << std::endl;
	newZ->announce();
	delete newZ;
	return (0);
}
