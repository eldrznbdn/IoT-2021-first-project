#include <iostream>

#include <locale>
#include "class.h"

using namespace std;



int main() {




    hotel a;

    cout << "Street num: ";
    cin >> a.street_num;
    cout << "Street: ";
    cin >> a.street;





    cout << "Our hotel is called " << a.get_name() << "." << "It is located on " << a.street << " " << a.street_num << ". In hotel we have " << a.get_rooms() << " rooms." << "It was built in " << a.get_year() << ". We have" << a.get_num_of_visitors() << "visitor nameq" << a.get_visitor_name() << endl;



}
#ifndef class_hpp
#define class_hpp

#include <iostream>
#include <ostream>
#include <string>


using namespace  std;

class hotel {

private:
    int num_of_visitors, rooms;
    string name;

protected:
    string visitor_name;
    int year;
public:
    string street;
    int street_num;


    int get_num_of_visitors() {
        return num_of_visitors;
    }
    int get_rooms() {
        return rooms;
    }
    string get_name() {
        return name;
    }
    string get_visitor_name() {
        return visitor_name;
    }
    int get_year() {
        return year;
    }



    hotel() {

        cout << "num of visitors: ";
        cin >> num_of_visitors;
        cout << "hotel name: ";
        cin >> name;
        cout << "rooms: ";
        cin >> rooms;
        cout << "year: ";
        cin >> year;
        cout << "visitor name: ";
        cin >> visitor_name;

    }


    ~hotel() {

    }


};



#endif /* class_hpp */