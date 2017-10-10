#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{	
    float result, peremA, peremP;
    char znak, znakDo = '*';
	
    string stroka;
    getline( cin, stroka );
    stroka = "0" + stroka;

    istringstream stream( stroka );

    stream >> result;
	
    while ( stream >> znak ) {
    	stream >> peremA;

	if ( znak == '+' ) {
        result += peremA;
	znakDo = '+';
	peremP = peremA;
        }
		
        else if ( znak == '-' ) {
	result -= peremA;
	znakDo = '-';
	peremP = peremA;
        }
		
    	else if ( ( znak == '*' ) && ( znakDo == '*' ) ) {
       	    result *= peremA;
	}
		
    	else if ( ( znak == '/' ) && ( znakDo == '*' ) ) {
	    result /= peremA;
	}
		
    	else if ( ( znak == '*' ) && ( znakDo == '+' ) ) {
	    result -= peremP;
	    peremP *= peremA;
	    result += peremP;
	    znakDo = '+';
	}
		
        else if ( ( znak == '*' ) && ( znakDo == '-' ) ) {
	    result += peremP;
	    peremP *= peremA;
	    result -= peremP;
	    znakDo = '-';
	}
		
        else if ( ( znak == '/' ) && ( znakDo == '+' ) ) {
   	    result -= peremP;
	    peremP /= peremA;
	    result += peremP;
	    znakDo = '+';
	}
		
        else if ( ( znak == '/' ) && ( znakDo == '-' ) ) {
	    result += peremP;
	    peremP /= peremA;
	    result -= peremP;
	    znakDo = '+';
	}
		
        else {
	    cout << "Error";
	    cin.get();
	    return 0;
	}
    }	
  
    cout << result;
    cin.get();
    return 0;
}
