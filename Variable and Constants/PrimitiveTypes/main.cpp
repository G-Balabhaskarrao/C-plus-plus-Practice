#include <iostream>

using namespace std;

int main(){
    /********************************
     * Character Type
     ********************************/
//     char middle_initial {'J'};
//     cout << "My middle inital is "<< middle_initial <<endl;
     
     /********************************
     * Integer Type
     ********************************/
 //     unsigned short int exam_score {55}; // same as unsigned short {55};
  //    cout << "My Exam Score was " << exam_score <<"\n";
      
//      int countries_represented {65};
//      cout << "There were "<< countries_represented << " countries_represented in my meeting" <<endl;
      
//      long  people_in_florida {20610000};
//      cout << "There are about "<< people_in_florida << " people in florida"<<endl;
      
//      long long int people_on_earth {7600000000};
//      cout << "There are about "<< people_on_earth << " people on earth\n"; 
      
//      long long distance_to_alpha_centauri {9'461'000'000'000};
//      cout << "The distance to alpha centauri is "<< distance_to_alpha_centauri << " Kilometers\n";\
      
      
      /*********************************
       * floating point types
       * *******************************/
         
//        float car_payment {401.32};
//        cout << "My car payment is "<< car_payment <<"\n";
        
//        double pi {3.14159};
//        cout << "Pi is "<< pi <<"\n";
        
//        long double large_amount{2.7e120};
//        cout << large_amount << " is very big number\n";


        /********************************
         * Boolean type
         *******************************/
    
//         bool game_over {false};
//         cout << "The value of game over is "<< game_over <<"\n";
  
         /******************************
          * Overflow example
          ******************************/

           short value1 {30000};
           short value2 {1000};
           short product {value1*value2}; 
           
           cout << "The sum of "<< value1 << " and "<< value2 << " is " << product <<"\n";
 
            return 0;
}
