#include <iostream> 
#include <string>
#include <vector>
#include <fstream> 
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


    Human() {
        string name;
        string last_name;
        int phone;
        string position;
    }


    Human(string name, string last_name, int phone, string position) {
        while (name != "exit")
        {
            this->name = name;
            this->last_name = last_name;
            this->phone = phone;
            this->position = position;
        }
        
    }
    friend class Menu;
    
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

class Menu {
    friend class Human;
public:
    void ChooseMenu() {
        int x;
        cout << "Address book program " << endl;
        cout << "Please, choose action" << endl;
        cout << "Press 1 for 'Enter the name' " << endl;
        cout << "Press 0 for 'Exit' " << endl;
         
        cin >> x;
        string choose;
        Human h1;
        switch (x) {
        case 1:
            
            h1.EnterInfoHuman();
            h1.SaveAllHuman();
        case 2:
            
            cout << "Continue ? (yes/no)" << endl;
            cin >> choose;
            while (choose == "yes")
            {
                h1.EnterInfoHuman();
                h1.SaveAllHuman();
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

