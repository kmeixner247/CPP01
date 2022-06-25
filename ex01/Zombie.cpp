/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:01:44 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 15:50:00 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << this->_name << "A new zombie crawls out of the ground, looking for brains!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " falls over and dies for good." << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string newname)
{
	this->_name = newname;
}
