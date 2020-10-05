#ifndef main_hpp
# define main_hpp

#include <iostream>
#include <string.h>

using namespace std;
class contact
{
	private:
	
	string first_name;
	string last_name;
	string nickname;
	string login;
	string postal_address;
	string email_address;
	string phone_number;
	string birthday_date;
	string favorite_meal;
	string underwear_color;
	string darkest_secret;


	public:
	
	void set_first_name(string str) {
		first_name = str;
	}
	void set_last_name(string str) {
		last_name = str;
	}
	void set_nickname(string str) {
		nickname = str;
	}
	void set_login(string str) {
		login = str;
	}
	void set_postal_address(string str) {
		postal_address = str;
	}
	void set_email_address(string str) {
		email_address = str;
	}
	void set_phone_number(string str) {
		phone_number = str;
	}
	void set_birthday_date(string str) {
		birthday_date = str;
	}
	void set_favorite_meal(string str) {
		favorite_meal = str;
	}
	void set_underwear_color(string str) {
		underwear_color = str;
	}
	void set_darkest_secret(string str) {
		darkest_secret = str;
	}


	string get_first_name() {
		return (first_name);
	}
	string get_last_name() {
		return (last_name);
	}
	string get_nickname() {
		return (nickname);
	}
	string get_login() {
		return (login);
	}
	string get_postal_address() {
		return (postal_address);
	}
	string get_email_address() {
		return (email_address);
	}
	string get_phone_number() {
		return (phone_number);
	}
	string get_birthday_date() {
		return (birthday_date);
	}
	string get_favorite_meal() {
		return (favorite_meal);
	}
	string get_underwear_color() {
		return (underwear_color);
	}
	string get_darkest_secret() {
		return (darkest_secret);
	}
};

#endif
