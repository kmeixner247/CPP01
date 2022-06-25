/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:07:14 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 15:51:54 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string&	getType(void) const;
	void				setType(std::string newType);

private:
	std::string _type;

};

#endif
