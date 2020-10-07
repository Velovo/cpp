#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	srand(time(0));
	const char *name[] = {"Aaron", "Ab", "Abba", "Abbe", "Abbey", "Abbie", "Abbot", "Abbott", "Abby", "Abdel", "Abdul", "Abe", "Abel", "Abelard", "Abeu", "Abey", "Abie", "Abner", "Abraham", "Abrahan", "Abram", "Abramo", "Abran", "Ad", "Adair", "Adam", "Adamo", "Adams", "Adan", "Addie", "Addison", "Addy", "Ade", "Adelbert", "Adham", "Adlai", "Adler", "Ado", "Adolf", "Adolph", "Adolphe", "Adolpho", "Adolphus", "Adrian", "Adriano", "Adrien", "Agosto", "Aguie", "Aguistin", "Aguste", "Agustin", "Aharon", "Ahmad", "Ahmed", "Ailbert", "Akim", "Aksel", "Al", "Alain", "Alair", "Alan", "Aland", "Alano", "Alanson", "Alard", "Alaric", "Alasdair", "Alastair", "Alasteir", "Alaster", "Alberik", "Albert", "Alberto", "Albie", "Albrecht", "Alden", "Aldin", "Aldis", "Aldo", "Aldon", "Aldous", "Aldric", "Aldrich", "Aldridge", "Aldus", "Aldwin", "Alec", "Alejandro", "Alejoa", "Aleksandr", "Alessandro", "Alex", "Alexander", "Alexandr", "Alexandre", "Alexandro", "Alexandros", "Alexei", "Alexio", "Alexis", "Alf", "Alfie", "Alfons", "Alfonse", "Alfonso", "Alford", "Alfred", "Alfredo", "Alfy", "Algernon", "Ali", "Alic", "Alick", "Alisander", "Alistair", "Alister", "Alix", "Allan", "Allard", "Allayne", "Allen", "Alley", "Alleyn", "Allie", "Allin", "Allister", "Allistir", "Allyn", "Aloin", "Alon", "Alonso", "Alonzo", "Aloysius", "Alphard", "Alphonse", "Alphonso", "Alric", "Aluin", "Aluino", "Alva", "Alvan", "Alvie", "Alvin", "Alvis", "Alvy", "Alwin", "Alwyn", "Alyosha", "Amble", "Ambros", "Ambrose", "Ambrosi", "Ambrosio", "Ambrosius", "Amby", "Amerigo", "Amery", "Amory", "Amos", "Anatol", "Anatole", "Anatollo", "Ancell", "Anders", "Anderson", "Andie", "Andonis", "Andras", "Andre", "Andrea", "Andreas", "Andrej", "Andres", "Andrew", "Andrey", "Andris", 
"Andros", "Andrus", "Andy", "Ange", "Angel", "Angeli", "Angelico", "Angelo", "Angie", "Angus", "Ansel", "Ansell", "Anselm", "Anson", "Anthony", "Antin", "Antoine", "Anton", "Antone", "Antoni", "Antonin", "Antonino", 
"Antonio", "Antonius", "Antons", "Antony", "Any", "Ara", "Araldo", "Yale", "Yanaton", "Yance", "Yancey", "Yancy", "Yank", "Yankee", "Yard", "Yardley", "Yehudi", "Yehudit", "Yorgo", "Yorgos", "York", "Yorke", "Yorker", "Yul", "Yule", "Yulma", "Yuma", "Yuri", "Yurik", "Yves", "Yvon", "Yvor", "Zaccaria", "Zach", "Zacharia", "Zachariah", "Zacharias", "Zacharie", "Zachary", "Zacherie", "Zachery", "Zack", "Zackariah", "Zak", "Zane", "Zared", "Zeb", "Zebadiah", "Zebedee", "Zebulen", "Zebulon", "Zechariah", "Zed", "Zedekiah", "Zeke", "Zelig", "Zerk", "Zollie", "Zolly"};
	this->zombie = new Zombie[n];
	this->number = n;
	while (n >= 0)
	{
		this->zombie[n].set_name(std::string(name[(rand()) % 256]));
		this->zombie[n].set_type(std::string("big"));
		--n;
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->zombie;
}
