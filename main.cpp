#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int menu(){
    cout << "Multi Conversion Calculator Tool" << endl;
    cout << " " << endl;
    cout << "PROPERTY OF ANTARIP KASHYAP" << endl;
    cout << " " << endl;
    cout << "Make Your Choice" << endl;
    cout << "1. Denary to Binary" << endl;
    cout << "2. Binary to Denary" << endl;
    cout << "3. Denary to Hex" << endl;
    cout << "4. Hex to Denary" << endl;
    cout << "5. Encryption Algorithm" << endl;
    cout << "6. Exit" << endl;
    cout << "Make your choice." << endl;
    string entry{};
    cin >> choice;
    
    while(choice > 6){
        cout << "invalid re-enter" << endl;
        cin >> choice;
    }    
    return choice;
}

void Denary_to_Binary(int entered_number){   
    
    vector<int> conversion_numbers{};
    
    string output{};
    
    int bit_size{};
    bit_size = log(entered_number) / log(2);
 
    int conversion_fill{};
    conversion_fill = exp2(bit_size);
    
    if (conversion_fill != 1){
        while (conversion_fill != 1){
            conversion_numbers.push_back(conversion_fill);
            conversion_fill = conversion_fill/2;            
        }
        conversion_numbers.push_back(1);
            
    }
    
    for(auto a : conversion_numbers){
        if ((entered_number >= a) and (entered_number != 0)){
            entered_number = entered_number - a;
            output= output + "1";
        }
        
        else{
            output= output + "0";
        }       
    }
    
    cout << "Binary conversion processed" << endl;
    cout << output << endl; 

}
    

void Binary_to_Denary(string binary){
    
    vector<int> conversion_numbers{};
    int output{};
    
    int conversion_fill{};
    conversion_fill= (exp2(binary.size()))/2;
    
    if (conversion_fill != 1){
        while (conversion_fill != 1){
            conversion_numbers.push_back(conversion_fill);
            conversion_fill = conversion_fill/2;            
        }
        conversion_numbers.push_back(1);            
    }
    
    for(auto a : conversion_numbers){
        int index{0};
        string current{binary.substr(index,1)};
        
        if (current != "0"){
            output += a;
        }
        
        index++;
        }
        
        cout << "denary output, processed- " << output << endl;
    }
    

int main(){
    cout << "Multi Conversion Calculator Tool" << endl;
    cout << " " << endl;
    cout << "PROPERTY OF ANTARIP KASHYAP" << endl;
    cout << " " << endl;
    string entry{};
    cin >> entry;
    
    Binary_to_Denary(entry);
    
    return 0;
}
