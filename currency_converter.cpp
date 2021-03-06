#include<iostream>
#include<string>    // String Class

using namespace std;

// List the type of currencies 
enum string_code {
    rmb,
    yen,
    ringgit,
    franc,
    singapore,
    canadian,
    australian,
    rupee,
    pound,
    euro,
    won,
    null
};

// Create inputs for the switch/case
string_code hashit (std::string const& inString) {
    if (inString == "rmb") return rmb;
    if (inString == "yen") return yen;
    if (inString == "ringgit") return ringgit;
    if (inString == "franc") return franc;
    if (inString == "singapore") return singapore;
    if (inString == "canadian") return canadian;
    if (inString == "australian") return australian;
    if (inString == "rupee") return rupee;
    if (inString == "pound") return pound;
    if (inString == "euro") return euro;
    if (inString == "won") return won;
    else return null;
}

// Function takes in the dollar amount and convert it to the country's currency of choice
double converter(string country, double dollar) {

    // Switch/case to return the correct conversion rate 
    switch (hashit(country)) {
        case rmb:
            return dollar * 6.501084;
        case yen:
            return dollar * 109.815272;
        case ringgit:
            return dollar * 4.237588;
        case franc:
            return dollar * 0.917325;
        case singapore:
            return dollar * 1.363021;
        case canadian:
            return dollar * 1.285713;
        case australian:
            return dollar * 1.402682;
        case rupee:
            return dollar * 74.352524;
        case pound:
            return dollar * 0.734142;
        case euro:
            return dollar * 0.856072;
        case won:
            return dollar * 1180.912665;
        default: 
            return -1;
    }
}

// Run program that converters the currency 
void runProgram() {

    // Ask the user for input 
    string country; 
    int dollar = 0;
    cout << "Enter in the amount (dollars) you would like to convert:   ";
    cin >> dollar;
    cout << "Type of currency you would like to convert:   ";   
    cin >> country;

    double newCurrency = converter(country, dollar);

    // If valid conversion, output the new amount 
    if (newCurrency > -1) {
        cout<< "\n";
        cout << "=============================================" << endl;
        cout << "Conversion Result: " << dollar << " dollars = " << newCurrency << " " << country << endl;
        cout << "=============================================" << endl;
        cout<< "\n";
    }
    else {
        cout<< "\n";
        cout << "=============================================" << endl;
        cout << "Not able to convert that type of currency " << endl;
        cout << "=============================================" << endl;
        cout<< "\n";
    }
}

int main(int argc, char* argv[]) {
    // Welcome Message 
    cout << "=============================" << endl;
    cout << "Welcome to Currency Converter \n";
    cout << "=============================" << endl;
    cout << "List of Currency Types: \n";
    cout << "Euro (euro) \n";
    cout << "British Pound (pound) \n";
    cout << "Indian Rupee (rupee) \n";
    cout << "Australian Dollar (australian) \n";
    cout << "Canadian Dollar (canadian) \n";
    cout << "Singapore Dollar (singapore) \n";
    cout << "Switzerland Swiss Franc (franc) \n";
    cout << "Malaysian Ringgit (ringgit) \n";
    cout << "Japanese Yen (yen) \n";
    cout << "Chinese RMB (rmb) \n";
    cout << "Korean Won (won) \n";
    cout << "______________________________\n" << endl;

    // Run the program until user stops
    while(1) {
        runProgram();
        cout << "Would you like to converted another currency? y/n \n" << endl;
        char ans = ' ';
        cin >> ans;
        if (ans == 'y') {
            cout << '\n';
            continue;
        } 
        else {
            cout << '\n';
            cout << "Thank you for using Currency Converter \n" << endl;
            break;
        }
    }
    
    return 0;
}