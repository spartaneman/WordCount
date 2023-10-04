#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <typeinfo>

using namespace std;

int main(int argc, char *argv[]){

    //Check that that there are 3 arguments passed in. 
    //This includes the executable file name, flag and text filename
    if(argc != 3){
        cout << "Usage: " << argv[0] << " -flag filename";
        exit(-1);
    }

    /*Step one: Check that there are 3 arguments
      Step Two: string compare using strcmp(const *char[], const *char[]) through
      if and if else program flow. 
      Step Three: create functions for each flag case
      
      Flags
      -c : outputs the number of bytes in the text file
      -l : outputs the number of lines in the file
      -w : outputs the number of words in the file
      -m : outputs the number of characters in the file
    
      If no flag is passed in then the output should be -c, -l, -w  
      final test is to read from the input stream 
      Linux: cat test.txt | ccwc -l 
      */
    char tBytes[] {"-l"};
    cout << strcmp(argv[1], tBytes) << endl;
    char word[] {"a bc"};
    int count = 0;
    for(auto w: word){
        cout << w << ": ";
        if(isgraph(w)){
            count += 1;
        }
    }
    cout << "byte count is " << count << endl;

     
    return 0;
}