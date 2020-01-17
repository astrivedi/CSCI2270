// program11.cpp 
#include<iostream>
int main(int argc, char* argv[])  {
  struct address {
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
  };
  address myadress = {1614011140000, "Ashutosh Trivedi", "(720) 707-9663", "ashutosh.trivedi@gmail.com", "4141 Spruce Street","Philadelphia","PA",19104,39.948610,-75.177830}; 
  std::cout << myadress.name << " lives in " << myadress.state << std::endl;
  return 0;
}
