#include "Domain/DataSets/CustomerInfoHandler.h"
#include <vector>
namespace Domain::DataSets
{
  
  class CustomerInfo : public CustomerInfoHandler
  {
  public:
    CustomerInfo();
    std::vector<Customer> getCustomers() override;
    Customer addCustomer( Customer custIn ) override;

    ~CustomerInfo();

  private:
    std::vector<Customer> currentCustomers;
  };
}    // namespace Domain::DataSets