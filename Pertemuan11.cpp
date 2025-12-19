#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main();

void registration(){
    ofstream myFile, acclist;
    string userReg;

    system("cls");
    cout << "------------REGISTER------------" << endl;
    cout << "Enter Username : ";
    cin >> userReg;

    cout << endl;

    myFile.open(userReg + ".txt");
    myFile << 0;
    myFile.close();

    acclist.open("ListAccount.txt", ios::app);
    acclist << userReg << endl;
    acclist.close();

    system("cls");
    cout << "Registration Successfull" << endl;
    main();
}

void login(){
    ifstream myFile;
    string userLog;
    string userData;
    bool exist = false;

    system("cls");
    cout << "------------LOGIN------------" << endl;
    cout << "Enter Username : ";
    cin >> userLog;

    cout << endl;

    myFile.open("ListAccount.txt");
    while (myFile >> userData){
        if(userData == userLog){
            exist = true;
        }
    }
    myFile.close();

    if (exist == true){
        ifstream myFileRead;
        myFileRead.open(userLog + ".txt");
        
        system("cls");
        cout << "Login Successfull" << endl;

        int topScore;
        cout << "Input Top Score : ";
        cin >> topScore;

        ofstream scoreFile;
        ifstream scoreCheck;
        int currentScore;

        scoreCheck.open(userLog + ".txt");
        scoreCheck >> currentScore;
        scoreCheck.close();

        if (topScore > currentScore){
            scoreFile.open(userLog + ".txt");
            scoreFile << topScore << endl;
            scoreFile.close();

            cout << "\nYour Top Score Is : " << topScore << endl;
        }
        
        myFileRead.close();
    } else {
        system("cls");
        cout << "------------------------------------" << endl;
        cout << "            LOGIN ERROR             " << endl;
        cout << " Please check your username and password" << endl;
        cout << "------------------------------------" << endl;
        main();
    }
}

int main(){
    int choice;
    cout << "1. Registration" << endl;
    cout << "2. Login" << endl;
    cout << "3. Input Your Choice : ";
    cin >> choice;

    switch(choice){
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
    }

    return 0;
}