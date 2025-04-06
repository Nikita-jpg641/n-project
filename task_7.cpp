#include <iostream>

int main() {
 
    int amountCashedOut;
    int money;
    int cash;
    std::string ruble;
    std::cout << "Введите сумму, которую необходимо обналичить: " << ruble;
    std::cin >> amountCashedOut;
  
    
    std::cout << "-------------------------------\n";
  
    if (amountCashedOut >= 100 && amountCashedOut <= 150000) {
      if (amountCashedOut >= 5000 && amountCashedOut % 5000 == 0) {
        std::cout << " Выдано купюр по 5000 рублей " << amountCashedOut / 5000 << " шт. \n";
      } else if (amountCashedOut % 5000 == 2000 || (amountCashedOut % 5000) % 2000 == 0) {
        std::cout << " Выдано купюр по 5000 рублей " << amountCashedOut / 5000 << " шт. \n";
        std::cout << " Выдано купюр по 2000 рублей " << (amountCashedOut % 5000) / 2000 << " шт. \n";
      } else if ((amountCashedOut % 5000) % 2000 == 1000) { 
        std::cout << " Выдано купюр по 5000 рублей " << amountCashedOut / 5000 << " шт. \n";
        std::cout << " Выдано купюр по 2000 рублей " << (amountCashedOut % 5000) /2000 << " шт. \n";
        std::cout << " Выдано купюр по 1000 рублей " << ((amountCashedOut % 5000) % 2000) / 1000 << " шт. \n";
      } else if (((amountCashedOut % 5000) % 2000) % 1000 % 500 == 0) {
        std::cout << " Выдано купюр по 5000 рублей " << amountCashedOut / 5000 << " шт. \n";
        std::cout << " Выдано купюр по 2000 рублей " << (amountCashedOut % 5000) /2000 << " шт. \n";
        std::cout<< " Выдано купюр по 1000 рублей " << ((amountCashedOut% 5000) % 2000) / 1000 << " шт. \n";
        std::cout << " Выдано купюр по 500 рублей " <<  ((amountCashedOut % 5000) % 2000) % 1000 / 500 << " шт. \n";
      } else if ((((amountCashedOut % 5000) % 2000) % 1000 % 500) % 200 == 0 || ((((amountCashedOut % 5000) % 2000) % 1000 % 500) % 200) % 100 ==0) {
        std::cout << " Выдано купюр по 5000 рублей " << amountCashedOut / 5000 << " шт. \n";
        std::cout << " Выдано купюр по 2000 рублей " << (amountCashedOut % 5000) /2000 << " шт. \n";
        std::cout<< " Выдано купюр по 1000 рублей " << ((amountCashedOut% 5000) % 2000) / 1000 << " шт. \n";
        std::cout << " Выдано купюр по 500 рублей " <<  ((amountCashedOut % 5000) % 2000) % 1000 / 500 << " шт. \n";
        std::cout << " Выдано купюр по 200 рублей " <<  (((amountCashedOut % 5000) % 2000) % 1000 % 500) / 200 << " шт. \n";
       std::cout << " Выдано купюр по 100 рублей " <<  (((amountCashedOut % 5000) % 2000) % 1000 % 500) % 200 / 100 << " шт. \n";
      } else if ((((amountCashedOut % 5000) % 2000) % 1000 % 500) % 100 == 0) {
        std::cout << " Выдано купюр по 5000 рублей " << amountCashedOut / 5000 << " шт. \n";
        std::cout << " Выдано купюр по 2000 рублей " << (amountCashedOut % 5000) /2000 << " шт. \n";
        std::cout<< " Выдано купюр по 1000 рублей " << ((amountCashedOut% 5000) % 2000) / 1000 << " шт. \n";
        std::cout << " Выдано купюр по 500 рублей " <<  ((amountCashedOut % 5000) % 2000) % 1000 / 500 << " шт. \n";
        std::cout << " Выдано купюр по 100 рублей " <<  (((amountCashedOut % 5000) % 2000) % 1000% 500) / 100 << " шт. \n";
       } 
  } else if (amountCashedOut >= 150000)
      std::cout << "Банкомат не может выдать за раз более 150 000 рублей";
<<<<<<< HEAD
      std::cout << "GitttLub!!!!" << std::endl;
=======
      std::cout << "GitHub!!!!" << std::endl;

      std::cout << "New commit for Git" << std::endl;
>>>>>>> new-header
}