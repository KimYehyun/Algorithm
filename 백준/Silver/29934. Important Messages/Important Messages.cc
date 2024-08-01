#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    int N, M;
      
    std::cin >> N;
    std::cin.ignore();  
    
    std::unordered_set<std::string> contact_list;
    
   
    for (int i = 0; i < N; ++i) {
        std::string email;
        std::getline(std::cin, email);
        contact_list.insert(email);
    }
    
  
    std::cin >> M;
    std::cin.ignore();  
    
    
    int highlighted_count = 0;
    
  
    for (int i = 0; i < M; ++i) {
        std::string sender;
        std::getline(std::cin, sender);
        if (contact_list.find(sender) != contact_list.end()) {
            ++highlighted_count;
        }
    }
    
    std::cout << highlighted_count << std::endl;
    
    return 0;
}