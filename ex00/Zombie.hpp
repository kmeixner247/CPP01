/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:00:52 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 15:49:46 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
	Zombie();
	~Zombie();
	void announce(void) const;
	void setName(std::string newname);

private:
	std::string	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
#endif
