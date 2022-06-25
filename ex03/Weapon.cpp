/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:09:48 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 15:51:44 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << type << " created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed" << std::endl;
}

const std::string&	Weapon::getType(void) const
{
	const std::string& typeRef = this->_type;

	return (typeRef);
}

void	Weapon::setType(std::string newType)
{
	this->_type = newType;
}
