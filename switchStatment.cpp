#include<iostream>
using namespace std;

int main()
{
    //Create a variable for the months in a year
    int month;
    
    //Prompt user to input their birth month
    cout << "Enter your birth month(1-12):";
    cin >> month;

    //Create a swtich statment to select to corrosponding birth month
    switch(month){
        case 1:
            cout << "Your birth month is January.";
            break;
        case 2:
            cout << "Your birth month is Feburary.";
            break;
        case 3: 
            cout << "Your birth month is March.";
            break;
        case 4: 
            cout << "Your birth month is April.";
            break;
        case 5: 
            cout << "Your birth month is May.";
            break;
        case 6:
            cout << "Your birth month is June.";
            break;
        case 7:
            cout << "Your birth month is July.";
            break;
        case 8: 
            cout << "Your birth month is August.";
            break;
        case 9:
            cout << "Your birth month is September.";
            break;
        case 10:
            cout << "Your birth month is October.";
            break;
        case 11: 
            cout << "Your birth month is November.";
            break;
        case 12:
            cout << "Your birth month is December.";
            break;
        default:
        if(month < 1){
            cout << "How tf is there a negative month??? Input a valid\n"
                 << "month ya FAWKING DUMBASS.";
                 //return;
        }else if(month > 12){
            cout << "Apparently there's more than 12 months\n"
                 << "in a year got it:) ya fawking idiot... Input a\n"
                 << "valid month please.";
                 //return;
        }
        

    }

    


    return 0;
}