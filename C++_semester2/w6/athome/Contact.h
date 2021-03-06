/**********************************************************
// Workshop 6: Class with a Resource-At_Home
// Contact.h
///////////////////////////////////////////////////////////
// Name			Date
// Bo Dai        2018/07/05
Student number:132954173
///////////////////////////////////////////////////////////
**********************************************************/

// TODO: header file guard
#ifndef SICT_FRACTION_H
#define SICT_FRACTION_H
// TODO: create namespace
namespace sict {
	// TODO: define the Contact class
	class Contact {
		// TODO: declare instance variables 
		char name[20];
		long long* phoneptr;
		int np;
	public:
		// TODO: declare public member functions
		Contact();
		//copy constructor
		Contact(const Contact&);
		//copy assignment operator
		Contact& operator=(const Contact&);
		//overloaded+=operator
		Contact& operator+=(long long);
		Contact(const char*, const long long*, int);
		~Contact();
		bool isEmpty() const;
		void display() const;
	};
}
#endif