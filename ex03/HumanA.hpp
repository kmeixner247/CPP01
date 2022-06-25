/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:36:14 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 15:50:42 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class	HumanA {
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void	attack(void);

private:
	std::string	_name;
	Weapon&		_weapon;
};
#endif