/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:00:17 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/25 18:58:00 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char *argv[])
{
	if (argc != 4 || !argv[2][0] || !argv[3][0])
		return (0);
	std::ifstream	ifs(argv[1]);
	std::string 	content;
	std::string 	buffer;
	while(std::getline(ifs, buffer))
		content.append(buffer + "\n");
	ifs.close();
	size_t	pos = content.find(argv[2]);
	while (pos != std::string::npos)
	{
		content.erase(pos, strlen(argv[2]));
		content.insert(pos, argv[3]);
		pos = content.find(argv[2]);
	}
	std::string	ofile = argv[1];
	ofile.append(".replace");
	std::ofstream	ofs(ofile.c_str());
	ofs << content;
	ofs.close();
}
