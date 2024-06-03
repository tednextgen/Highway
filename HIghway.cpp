#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   string direction;
   string highwayName;
   cin >> highwayNumber;
   
   if(highwayNumber % 2 == 0){
      direction = "east/west.";
   }else if (highwayNumber % 2 == 1){
      direction = "north/south.";
   }
   if(highwayNumber >= 1 && highwayNumber <= 99){
      cout << "I-" << highwayNumber << " is primary, going " << direction << endl;
   }else if(highwayNumber >= 100 && highwayNumber <= 999){
      if(highwayNumber % 100 == 0){
         cout << highwayNumber << " is not a valid interstate highway number." << endl;
      }else{
         cout << "I-" << highwayNumber << " is auxiliary, serving " << "I-" << highwayNumber % 100 << ", going " << direction << endl;
      }
   }else if(highwayNumber == 0){
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }else if(highwayNumber > 999){
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }
   return 0;
}
