#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class contact
{
	private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;


	public:

	// contact(void) {
	// 	std::cout << "constructor called" <<  std::endl;
	// }
	// ~contact(void) {
	// 	std::cout << "destructor called" << std::endl;
	// }

	void set_first_name(std::string str) {
		first_name = str;
	}
	void set_last_name(std::string str) {
		last_name = str;
	}
	void set_nickname(std::string str) {
		nickname = str;
	}
	void set_login(std::string str) {
		login = str;
	}
	void set_postal_address(std::string str) {
		postal_address = str;
	}
	void set_email_address(std::string str) {
		email_address = str;
	}
	void set_phone_number(std::string str) {
		phone_number = str;
	}
	void set_birthday_date(std::string str) {
		birthday_date = str;
	}
	void set_favorite_meal(std::string str) {
		favorite_meal = str;
	}
	void set_underwear_color(std::string str) {
		underwear_color = str;
	}
	void set_darkest_secret(std::string str) {
		darkest_secret = str;
	}


	std::string get_first_name() {
		return (first_name);
	}
	std::string get_last_name() {
		return (last_name);
	}
	std::string get_nickname() {
		return (nickname);
	}
	std::string get_login() {
		return (login);
	}
	std::string get_postal_address() {
		return (postal_address);
	}
	std::string get_email_address() {
		return (email_address);
	}
	std::string get_phone_number() {
		return (phone_number);
	}
	std::string get_birthday_date() {
		return (birthday_date);
	}
	std::string get_favorite_meal() {
		return (favorite_meal);
	}
	std::string get_underwear_color() {
		return (underwear_color);
	}
	std::string get_darkest_secret() {
		return (darkest_secret);
	}
};

#endif
