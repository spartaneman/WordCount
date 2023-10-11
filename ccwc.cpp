#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
#include <typeinfo>

using namespace std;

int getBytes(ifstream &, const string &file);

int getLines(ifstream &, const string &file);

int getWords(ifstream &, const string &file);

int getCharacters(ifstream &, const string &file);

void getAll(ifstream &, const string &file);

int main(int argc, char *argv[]){

    //Check that that there are 3 arguments passed in. 
    //This includes the executable file name, flag and text filename
    if(argc != 3 && argc != 2){
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


    //If there are three arguments then a flag has been included
    if(argc == 3){
        ifstream inputStream;
        //Step Two: Control Flow through if, else statements 
        //String compare
        if(strcmp(argv[1], "-c") == 0){
            cout << getBytes(inputStream, argv[2]);
            exit(0);
        }
        else if(strcmp(argv[1], "-l") == 0){
            cout << getLines(inputStream, argv[2]);
            exit(0);
        }
    }
    

     
    return 0;
}

/*
 *Params: ifstream, string file
 *Return: totalBytes
 *Function calculates total number of bytes in the file. 
 * */
int getBytes(ifstream &inputStream, const string &file){
    int byteSize = sizeof(char);
    int tBytes = 0;
    char character;
    inputStream.open(file);
    while(inputStream.get(character)){
        if(isprint(character)){
                tBytes += 1;
        }
    }
    return tBytes * byteSize;
}

/*
 *Params: ifstream, string file
 *Return: totalBytes
 *Function calculates total number of lines in the file. 
 * */
int getLines(ifstream &inputStream, const string &file)
{
    int totalLines = 0;
    string line;
    inputStream.open(file);
    while(getline(inputStream, line)){
        totalLines +=1;
    }
    return totalLines;
}

/*
 *Params: ifstream, string file
 *Return: totalBytes
 *Function calculates total number of words in the file. 
 * */
int getWords(ifstream &, const string &file){
    int words = 0;


    return words;
}

/*
 *Params: ifstream, string file
 *Return: totalBytes
 *Function calculates total number of characters in the file. 
 * */
int getCharacters(ifstream &, const string &file){
    int characters = 0;

    return characters;
}

/*
 *Params: ifstream, string file
 *Return: totalBytes
 *Function calculates total number of lines in the file. 
 * */
void getAll(ifstream &, string &file){
    
}