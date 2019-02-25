// HOMEWORK3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <vector>;

using namespace std;

class sandpit_turtle {
public:
	virtual void create() = 0;
	virtual void pack() = 0;
	virtual void send() = 0;
};

class grif_turtle : public sandpit_turtle {
	void create() {
		cout << "grif sandpit turtle was created" << endl;
	}
	void pack() {
		cout << "grif sandpit turtle was packed" << endl;
	}
	void send() {
		cout << "grif sandpit turtle was sended" << endl;
	}
};

class giant_turtle : public sandpit_turtle {
	void create() {
		cout << "giant sandpit turtle was created" << endl;
	}
	void pack() {
		cout << "giant sandpit turtle was packed" << endl;
	}
	void send() {
		cout << "giant sandpit turtle was sended" << endl;
	}
};

class coral_turtle : public sandpit_turtle {
	void create() {
		cout << "coral sandpit turtle was created" << endl;
	}
	void pack() {
		cout << "coral sandpit turtle was packed" << endl;
	}
	void send() {
		cout << "coral sandpit turtle was sended" << endl;
	}
};

class giant_head_turtle : public sandpit_turtle {
	void create() {
		cout << "giant head sandpit turtle was created" << endl;
	}
	void pack() {
		cout << "giant head sandpit turtle was packed" << endl;
	}
	void send() {
		cout << "giant head sandpit turtle was sended" << endl;
	}
};

class sandpit_turtle_createtor {
public:
	virtual sandpit_turtle *buy_sandpit_turtle(int id) = 0;
	virtual sandpit_turtle *create_sanpit_turtle(int id) = 0;
};

class shop_of_blue_sandpit_turtles : sandpit_turtle_createtor {
public:
	shop_of_blue_sandpit_turtles() {
		cout << "shop of red sanpit turtles was created" << endl;
	}
	sandpit_turtle *create_sanpit_turtle(int id) {
		if (id == 1) {
			return new grif_turtle;
		}
		if (id == 2) {
			return new giant_turtle;
		}
	}
	
	sandpit_turtle *buy_sandpit_turtle(int id) {
		sandpit_turtle *turtle = create_sanpit_turtle(id);
		turtle->create();
		turtle->pack();
		turtle->send();
		return turtle;
	}
};

class shop_of_red_sandpit_turtles : sandpit_turtle_createtor {
public:
	shop_of_red_sandpit_turtles() {
		cout << "shop of red sandpit turtles was created" << endl;
	}
	sandpit_turtle *create_sanpit_turtle(int id) {
		if (id == 3) {
			return new coral_turtle;
		}
		if (id == 4) {
			return new giant_head_turtle;
		}
	}

	sandpit_turtle *buy_sandpit_turtle(int id) {
		sandpit_turtle *turtle = create_sanpit_turtle(id);
		turtle->create();
		turtle->pack();
		turtle->send();
		return turtle;
	}
};

void main() {
	shop_of_blue_sandpit_turtles s1;
	shop_of_red_sandpit_turtles s2;
	s1.buy_sandpit_turtle(1);
	s1.buy_sandpit_turtle(2);
	s2.buy_sandpit_turtle(3);
	s2.buy_sandpit_turtle(4);
}
