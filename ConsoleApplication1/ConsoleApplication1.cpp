#include <iostream>
#include <list>
void grid(std::string First, std::string Second, std::string Third, std::string Fourth) {
	system("CLS");
	std::cout << "\n   [      " << First << "      |      " << Second << "      |      " << Third << "      |      " << Fourth << "      ]";
}

void questions(std::string First, std::string Second, std::string Third, std::string Third2, std::string Fourth, std::string Question) {
	do {
		grid(First, Second, Third, Fourth);
		std::cout << "\n\n Vorname: ";
		std::cin >> First;
		grid(First, Second, Third, Fourth);
		std::cout << "\n\n Nachname: ";
		std::cin >> Second;
		grid(First, Second, Third, Fourth);
		std::cout << "\n\n Adresse: ";
		std::cin >> Third;
		std::cin >> Third2;
		Third = Third + " " + Third2;
		grid(First, Second, Third, Fourth);
		std::cout << "\n\n Telefonnummer: ";
		std::cin >> Fourth;
		grid(First, Second, Third, Fourth);
		std::cout << "\n\n Ist alles richtig? [Ja/Nein]\n ";
		std::cin >> Question;

		if (Question == "Ja") {
			break;
		}
		else {
			First = "";
			Second = "";
			Third = "";
			Fourth = "";
		}
	} while (true);
}

int main() {
	std::string Container1;
	std::string Container2;
	std::string Container3;
	std::string Container32;
	std::string Container4;
	std::string ifelseantwort;
	questions(Container1, Container2, Container3, Container3, Container4, ifelseantwort);
	
}