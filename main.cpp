#include <iostream>
#include <string>
using namespace std;

enum class weekDay {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday, 
	Sunday
};



ostream& operator<<(ostream& os, weekDay weekDay) {
	switch (weekDay) {
	case weekDay::Monday:return os << "Monday";
	case weekDay::Tuesday:return os << "Tuesday";
	case weekDay::Wednesday:return os << "Wednesday";
	case weekDay::Thursday:return os << "Thursday";
	case weekDay::Friday:return os << "Friday";
	case weekDay::Saturday:return os << "Saturday";
	case weekDay::Sunday:return os << "Sunday";
	}
}

class Library {
private:
	string* bookNames;
	int numberOfBooks;
	string* librarianNames;
	int numberOfLibrarians;
	bool isClosed;
	struct libraryProgramStruct {
		int startingHour[7];
		int closingHour[7];
	} libraryProgram;

public:
	Library(string* bookNames = nullptr, int numberOfBooks = 0, string* librarianNames = nullptr,int numberOfLibrarians = 0, int* startingHours = nullptr, int* closingHours = nullptr){
		
		if (numberOfBooks > 0) {
			this->numberOfBooks = numberOfBooks;
			this->bookNames = new string[numberOfBooks];
			for (int i = 0; i < numberOfBooks; i++) {
				this->bookNames[i] = bookNames[i];
			}
		}
		if (numberOfLibrarians > 0) {
			this->numberOfLibrarians = numberOfLibrarians;
			this->librarianNames = new string[numberOfLibrarians];
			for (int i = 0; i < numberOfBooks; i++) {
				this->bookNames[i] = bookNames[i];
			}
		}


	}
	void show() {

	}
	Library(Library& myLibrary){}
	~Library(){}
};


int main() {

}