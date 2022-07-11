#include <iostream> 
#include <string>
#include <vector>
#include <fstream> 
#include <tuple>
using namespace std;

class Human {
private:
    string name;
    string last_name;
    int phone;
    string position;

public:
    void set_name(string person_name)
    {
        name = person_name;
    }
    // Получение имени
    string get_name()
    {
        return name;
    }
    void set_lastname(string person_lastname)
    {
        last_name = person_lastname;
    }
    // Получение имени
    string get_lastname()
    {
        return last_name;
    }
    

    Human() {

            string name;
            string last_name;
            int phone;
            string position;
        
        
    }

    


    Human(string name, string last_name, int phone, string position) {
        
            this->name = name;
            this->last_name = last_name;
            this->phone = phone;
            this->position = position;
        
            
        
    }
    /*void ShowAll() {
        tuple<string, string, int, string> tup1(std::make_tuple(name, last_name, phone, position));
        std::cout << std::get<0>(tup1) << " " << std::get<1>(tup1) << " " << std::get<2>(tup1) << " " << std::get<3>(tup1) << std::endl;
        
    }*/
    
    //friend class Menu;
    
    void EnterInfoHuman() {
        
        //cout << "Enter 'exit' to name for stoping " << endl;
        
        cout << "input name: ";
        cin >> name;
         
        cout << "input last_name: ";
        cin >> last_name;
        cout << "input phone: ";
        cin >> phone;
        cout << "input position: ";
        cin >> position;
        cout << endl;
        
    };

    void SaveAllHuman() {
                ofstream save("Address book.txt", ios::app);
                save << "name - " << name << endl;
                save << "last_name - : " << last_name << endl;
                save << "phone - : " << phone << endl;
                save << "position - : " << position << endl;
                save << endl;
                save.close();
    }

};

class Menu : public Human {
    //friend class Human;
public:
    void ChooseMenu() {
        int x;
        cout << "Address book program " << endl;
        cout << "Please, choose action" << endl;
        cout << "Press 1 for 'Enter the name' " << endl;
        cout << "Press 0 for 'Exit' " << endl;
         
        cin >> x;
        string choose;
        
        switch (x) {
        case 1:
            
            EnterInfoHuman();
            SaveAllHuman();
        case 2:
            
            cout << "Continue ? (yes/no)" << endl;
            cin >> choose;
            while (choose == "yes")
            {
                EnterInfoHuman();
                SaveAllHuman();

                cout << "Continue ? (yes/no)" << endl;
                cin >> choose;
            }
        case 0:
            break;
        }       
    }
};



int main()
{  
    Menu m1;
    m1.ChooseMenu();

}

