/**CPPFile*********************************************************************
   FileName    [final.cpp] 
   
   PackageName [none]

   Synopsis    [Address Book---a simple address book. It demonstrates the 
   usage of array of structures.]

   Description [ This program reads a sequence of address lines from a comma 
   separaed values (csv) formatted file, and stores them in an appropriate 
   database of  structures. It then pretty prints the entire database.
   ]   
   
   SeeAlso     []       

   Author      [Ashutosh Trivedi (ashutosh.trivedi@colorado.edu)]
   Copyright   [ 
   
   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 2 of the License, or (at your option) any
   later version.  
  
   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
   FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details
   at http://www.gnu.org/copyleft/gpl.html
   
   ]

*******************************************************************************/      
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

struct Address {
  long id; // unique ID: 1614011140000
  std::string name;  // Name: Ashutosh Trivedi
  std::string phone; //Phone number: (720) 707-9663
  std::string email; //ashutosh.trivedi@gmail.com
  std::string street; //4141 Spruce Street
  std::string city; // Philadelphia
  std::string state; //PA
  int zip;  // 19104
  float lat; //39.948610
  float lon; //-75.177830
  Address() {};
  Address(long _id, std::string _name, std::string _phone, std::string _email, std::string _street, std::string _city, std::string _state, int _zip,float _lat, float _lon) {
    id = _id;
    name = _name;
    phone = _phone;
    email = _email;
    street = _street;
    city = _city;
    state = _state;
    zip = _zip;
    lat = _lat;
    lon = _lon;
  }
  void fill(std::string _id, std::string _name, std::string _phone, std::string _email, std::string _street, std::string _city, std::string _state, std::string _zip, std::string _lat, std::string _lon) {
    std::string::size_type sz;
    id = std::stol(_id, &sz);
    name = _name;
    phone = _phone;
    email = _email;
    street = _street;
    city = _city;
    state = _state;
    zip = std::stoi(_zip);
    lat = std::stof(_lat);
    lon = std::stof(_lon);
  }
  void prettyPrint() {
    std:: cout << name << std::endl;
    std::cout << "    Unique Identity Number: \n        " << id << std::endl;
    std::cout << "    Phone number: \n        +1 " << phone << std::endl;
    std::cout << "    E-mail: \n        " << email << std::endl;
    std::cout << "    Address: "<< std::endl;
    std::cout << "        "<< street << ", " << city << ", " << state << "-" << zip << std::endl;
    std::cout << "    Location:\n        ("<< lat << ", " << lon << ")" << std::endl;
    std::cout<< "_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/" << std::endl;
  }
};

int main (int argc, char *argv[]) {
  if (argc != 2) std::cerr << "Error: incorrect number of arguments \n";
  else {
    std::ifstream fin(argv[1]);
    if (fin.is_open()) {
      Address addressDB[100]; // Address database (array of structures)
      int size = 0;
      std::string line;
      while (getline(fin, line)) {
	std::stringstream sin(line);
	std::string id, name, phone, email, street, zip, city, state, lat, lon;
	getline(sin, id, ',');
	getline(sin, name, ',');
	getline(sin, phone, ',');
	getline(sin, email, ',');
	getline(sin, street, ',');
	getline(sin, city, ',');
	getline(sin, state, ',');
	getline(sin, zip, ',');
	getline(sin, lat, ',');
	getline(sin, lon, ' ');
	
	addressDB[size].fill(id, name, phone, email, street, city, state, zip, lat, lon);
	size++;
      }
      for (int i=0; i< size; i++) addressDB[i].prettyPrint();
  }
  else std::cerr << "File addresses.txt not found!";
  fin.close(); // Don't forget to close!
  return 0;
  }
}
