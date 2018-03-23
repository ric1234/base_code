#include <iostream>

void 
displayFullName(const std::string& str){
    std::cout << str << std::endl;
}
int main()
{
    std::string name("Richard");
    std:: cout << "Name: " <<name << std::endl;
    std::string first_name(name);
    std::cout << "First name: " << first_name << std::endl;
    
    //Skips the first 2 characters:
    std::string also_called_short(name, 2);  
    std::cout << "Also_called_short: " << also_called_short << std::endl;
    
    //Easy assignment
    name = "Noronha";
    
    //Simpler than strcmp
    name == "Noronha" ? 
        std::cout << "That is surname" <<std::endl : 
        std::cout << "What is that? " << std::endl;
    
    //Lexicographic check, Upper case before lower case.. follows ASCII check
    name < first_name ? 
        std::cout << "Surname comes first lex" << std::endl : 
        std::cout << "Name comes first lex" << std::endl;
    
    //Concat similar to Python
    std::string full_name = first_name + " " + name;
    std::cout << "Full name: " << full_name << std::endl;
    
    //With c strings
    const char *title = "Mr.";
    full_name = full_name.append(title);
    std::cout << "Full name: " << full_name << std::endl;
    
    //Insert puts it before
    full_name = full_name.insert(0, title);
    std::cout << "Full name: " << full_name << std::endl;
    
    //full_name.erase(3);
    full_name.pop_back();
    full_name.pop_back();
    full_name.pop_back();
    std::cout << "Full name: " << full_name << std::endl;
    
    //Insert puts it before
    full_name = full_name.insert(3, " ");
    std::cout << "Full name: " << full_name << std::endl;
    
    //Use pass by reference to avoid the data copy
    displayFullName(full_name);
    return 0;
}
