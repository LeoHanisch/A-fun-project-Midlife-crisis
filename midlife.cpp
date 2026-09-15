    #include <iomanip>
    #include <iostream>
    #include <string>
    #include <chrono>
    #include <thread>   

    using namespace std;

    int main ( ){

        int age;
        
        string start, q1, q2, q3;

        cout << "Hello! Welcome to the Midlife crisis calculator! " << endl;
        cout << "------------------------------------------" << endl;
        cout << "Answer the following questions to find out whether you are in a midlife crisis or not!" << endl;
        cout << "Would you like to start? (Y/N)" << endl; 

        cin >> start;
        if (start == "Y" || start == "y") {
            cout << "Alright! Let's find out!" << endl;
            this_thread::sleep_for(chrono::seconds(1)); 
            cout << "Press enter to continue..." << endl;
            cin.ignore();
            cin.get();
            cout << "How old are you?" << endl;
            cin >> age;
            if (age < 35 && !(age < 18 )) {
                cout << "You are not in a midlife crisis yet! Enjoy your young adult life!" << endl;
                cin.ignore();
                cin.get();
            }else if (age > 55) {
                cout << "You are too old for the typical age for a midlife crisis. Embrace your wisdom!" << endl;
                cin.ignore();
                cin.get();
            }else if (age == 0) {
                cout << "You are not born yet! How can you even be in a midlife crisis?" << endl;
                cin.ignore();
                cin.get();
            }else if (age < 18 && age > 0) {
                cout << "You are either in kindergarden or still a teenager!" << endl;
                cin.ignore();
                cin.get();
            }else if (age < 0) {
                cout << "Where are you from? Mars? GET OUTTA HERE!" << endl;
                cin.ignore();
                cin.get();
            }
            else if (age >= 35 && age <= 55) {
                cout << "Do you often feel that the best years of your life are already behind you? (Y/N)" << endl;
                cin >> q1;

                cout << "Do you feel a strong urge to radically change your life because you are unhappy with where you are now? (Y/N)" << endl;
                cin >> q2;

                cout << "Do you frequently worry about getting older and feel a need to prove that you are still young, attractive, successful, or desirable? (Y/N)" << endl;   
                cin >> q3;

                if ((q1 == "Y" || q1 == "y") && (q2 == "Y" || q2 == "y") && (q3 == "Y" || q3 == "y")) {
                    cout << "Well, I know it may be difficult, but you are in a midlife crisis! Embrace the journey, and enjoy life!" << endl;
                    cin.ignore();
                    cin.get();
                } else if ((q1 == "N" || q1 == "n") || (q2 == "Y" || q2 == "y") || (q3 == "Y" || q3 == "y")) {
                    cout << "Based on your answers, it seems like you are currently or almost experiencing a midlife crisis. Keep enjoying life!" << endl;
                    cin.ignore();
                    cin.get();
                } else{
                    cout << "Based on your answers, it seems like you are not experiencing a midlife crisis. Keep enjoying life!" << endl;
                    cin.ignore();
                    cin.get();
                }
            }
        }
        else if (start == "N" || start == "n") {
            cout << "No worries! At least you typed something!" << endl;
            cin.ignore();
            cin.get();
        } else {
            cout << "You serious? You must be fun at parties! Right? : / " << endl;
            cin.ignore();
            cin.get();
        }

        
        
        return 0;
    }