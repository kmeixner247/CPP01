/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:05:33 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 16:55:12 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N = 20;
	Zombie *horde = zombieHorde(N, "Phillip");

	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
}
