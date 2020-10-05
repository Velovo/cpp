#include "main.hpp"

void fill_contact(contact *person)
{
	string str;

	cout << "Your first name is:\n";
	getline(cin, str);
	person->set_first_name(str);

	cout << "Your last name is:\n";
	getline(cin, str);
	person->set_last_name(str);
	
	cout << "Your nickname is:\n";
	getline(cin, str);
	person->set_nickname(str);
	
	cout << "Your login is:\n";
	getline(cin, str);
	person->set_login(str);
	
	cout << "Your postal address is:\n";
	getline(cin, str);
	person->set_postal_address(str);
	
	cout << "Your email address is:\n";
	getline(cin, str);
	person->set_email_address(str);
	
	cout << "Your phone number is:\n";
	getline(cin, str);
	person->set_phone_number(str);
	
	cout << "Your birthday date is:\n";
	getline(cin, str);
	person->set_birthday_date(str);
	
	cout << "Your favorite meal is:\n";
	getline(cin, str);
	person->set_favorite_meal(str);
	
	cout << "Your underwear color is:\n";
	getline(cin, str);
	person->set_underwear_color(str);
	
	cout << "Your darkest secret is:\n";
	getline(cin, str);
	person->set_darkest_secret(str);
}

void writedown(contact *carac[8], int j, string cur)
{
	int nbr;

	nbr = strlen(cur.data());
	if (nbr > 10)
	{
		cur[9] = '.';
		cur[10] = '\0';
	}
	else
	{
		while (10 - nbr > 0)
		{
			cout << " ";
			++nbr;
		}
	}
	cout << cur.data() << "|";
}

void benten(contact *carac[8], int j)
{
	string cur;

	cur = carac[j]->get_first_name();
	writedown(carac, j, cur);

	cur = carac[j]->get_last_name();
	writedown(carac, j, cur);

	cur = carac[j]->get_nickname();
	writedown(carac, j, cur);
	cout << "\n";
}

void ft_search(contact *carac[8], int i)
{
	int j;
	string str;
	int k;

	j = 0;
	while (j < i)
	{
		cout << "         " << j << "|";
		benten(carac, j);
		++j;
	}
	while (1)
	{
		cout << "Enter index: ";
		getline(cin, str);
		k = str.data()[0] - '0';
		if (k >= 0 && k <= i - 1)
		{
			cout << "         " << k << "|";
			benten(carac, k);
		}
		else
		{
			cout << "Index invalid, returning to main\n";
			break;
		}
	}
}

int main()
{
	contact *carac[8];
	string line;
	int i;

	i = 0;
	while (1)
	{
		getline(cin, line);
		if (strncmp(line.data(), "ADD", 4) == 0)
		{
			if (i < 8)
			{
				carac[i] = new contact;
				fill_contact(carac[i]);
				++i;
			}
			else
				cout << "error: phone book max length is 8 contact" << "\n";	
		}
		else if (strncmp(line.data(), "SEARCH", 7) == 0)
		{
			ft_search(carac, i);
		}
		else if (strncmp(line.data(), "EXIT", 5) == 0)
		{
			i = i - 1;
			while (i >= 0)
			{
				delete carac[i];
				--i;
			}
			return (0);
		}
	}
	return (0);
}
