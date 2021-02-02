#include "Purchase.h"
#include <iostream>
#include <sstream> //To cast string to nums
#include <iomanip>
#include "Domain/Sales/Purchase.h"

const double TEMP_TAX = .05;
namespace Domain::Sales
{
	Purchase::Purchase() {
          buyer = "current buyer";
  }
	std::string Purchase::makePurchase(std::string iNum, std::string qty, double cost) {
          std::stringstream temp( qty );
          int               tempQty;
          temp >> tempQty;
          double    total = ( tempQty * cost );
          total              = total + ( total * TEMP_TAX );
          total              = std::ceil( total * 100.0 ) / 100.0;

          std::string result = std::to_string(total);
          result.erase( result.find_last_not_of( '0' ) + 1, std::string::npos );
          return result;

		}
	std::string Purchase::makeReciept(std::string pList) {
          std::string result;
          result = "Thank you for your purchase:\n" + pList;
          return result;
		}
	std::string Purchase::makePayment(std::string ccInfo, int ccExpire, int ccSecurity) {
                    //call external payment system
            
                    return "\nSuccessful Payment\n";
		}

	Purchase::~Purchase() {

  }
}