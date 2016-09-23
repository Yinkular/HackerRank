#include <string>

using namespace std;

class Person
{
protected:
	string firstname, lastname;

public:
	Person()
	{
		firstname = lastname = " balls";
	}

	Person(string passed_firstname, string passed_lastname)
	{
		firstname = passed_firstname;
		lastname = passed_lastname;
	}

	void set_name(string passed_firstname, string passed_lastname)
	{
		firstname = passed_firstname;
		lastname = passed_lastname;
	}
};

// initilializing both derived and base constructor together.
class MalePerson :public Person
{
private:
	string trouser_length;

public:
	MalePerson(string passed_firstname, string passed_lastname, string passed_length):Person(passed_firstname, passed_lastname)
	{
		trouser_length = passed_length;
	}

	string fullname()
	{
		return "i am male, " + firstname + " " + lastname + " and i wear " + trouser_length;
	}
};

// inheriting member variables but using member functions to set values rather than a constructor
// initializing derived constructor
class FemalePerson :public Person
{
private:
	string waist_size;
public:

	FemalePerson(string passed_waist)
	{
		waist_size = passed_waist;
	}

	string fullname()
	{
		return "i am female " + firstname + " " + lastname + " and i wear " + waist_size;
	}
};


// inheriting default constructors
class RandomPerson : public Person
{
public:

	RandomPerson()
	{};
	
	string fullname()
	{
		return "i am random " + firstname + " " + lastname;
	}

};