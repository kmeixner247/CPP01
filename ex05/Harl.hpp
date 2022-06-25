/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 21:26:04 by kmeixner          #+#    #+#             */
/*   Updated: 2022/05/09 21:26:04 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>


class Harl {
public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};
#endif