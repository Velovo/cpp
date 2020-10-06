#include <iostream> 
#include <string.h>
#include "contact_class.hpp"

void fill_contact(contact &person)
{
	std::string str;

	std::cout << "Your first name is:\n";
	getline(std::cin, str);
	person.set_first_name(str);

	std::cout << "Your last name is:\n";
	getline(std::cin, str);
	person.set_last_name(str);
	
	std::cout << "Your nickname is:\n";
	getline(std::cin, str);
	person.set_nickname(str);
	
	std::cout << "Your login is:\n";
	getline(std::cin, str);
	person.set_login(str);
	
	std::cout << "Your postal address is:\n";
	getline(std::cin, str);
	person.set_postal_address(str);
	
	std::cout << "Your email address is:\n";
	getline(std::cin, str);
	person.set_email_address(str);
	
	std::cout << "Your phone number is:\n";
	getline(std::cin, str);
	person.set_phone_number(str);
	
	std::cout << "Your birthday date is:\n";
	getline(std::cin, str);
	person.set_birthday_date(str);
	
	std::cout << "Your favorite meal is:\n";
	getline(std::cin, str);
	person.set_favorite_meal(str);
	
	std::cout << "Your underwear color is:\n";
	getline(std::cin, str);
	person.set_underwear_color(str);
	
	std::cout << "Your darkest secret is:\n";
	getline(std::cin, str);
	person.set_darkest_secret(str);
}

std::string truncate(std::string str)
{
	size_t width = 9;
	std::string space("          ");

	if (str.length() > width)
		return str.substr(0, width) + ".";
	else
		str.insert(0, space, 0, width - str.length() + 1);
	return str;
}

bool	ft_search(contact carac[8], int i)
{
	std::string line;
	int			j;
	int			index;

	j = 0;
	while (j < i)
	{
		std::cout << "         " << j << "|";
		std::cout << truncate(carac[j].get_first_name()) << "|" ;
		std::cout << truncate(carac[j].get_last_name()) << "|" ;
		std::cout << truncate(carac[j].get_nickname());
		std::cout << std::endl;
		++j;
	}
	j = 0;
	std::cout << "Select index: ";
	std::getline(std::cin, line);
	try
	{
		index = std::stoi(line);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error bad index, returning to main" << std::endl;
		return (false);
	}
	if (index < i && index >= 0)
	{
		std::cout << "         " << index << "|";
		std::cout << truncate(carac[index].get_first_name()) << "|" ;
		std::cout << truncate(carac[index].get_last_name()) << "|" ;
		std::cout << truncate(carac[index].get_nickname());
		std::cout << std::endl;
		std::cout << "Returning to main" << std::endl;
		return (true);
	}
	else
	{
		std::cout << "Error bad index, returning to main" << std::endl;
		return (false);
	}
	return (false);
}

int main()
{
	contact carac[8];
	std::string line;
	int i;

	i = 0;
	std::cout << "Welcome to the phone book, comands are: ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "phone_book > ";
		std::getline(std::cin, line);
		if (strncmp(line.data(), "ADD", 4) == 0)
		{
			if (i < 8)
			{
				fill_contact(carac[i]);
				++i;
			}
			else
				std::cout << "error: phone book max length is 8 contact" << "\n";	
		}
		else if (strncmp(line.data(), "SEARCH", 7) == 0)
			ft_search(carac, i);
		else if (strncmp(line.data(), "EXIT", 5) == 0)
			return (0);
	}
	return (0);
}
