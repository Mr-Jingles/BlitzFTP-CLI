/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File.cpp
 * Author: Edward
 * 
 * Created on 08 March 2016, 01:49
 */

#include "File.h"


File::File() {
    //-----------debugging------------------
    cout << "\nFile Object Created\n";
    //----------debugging-------------------
}


File::~File() {
    //--------debugging------------------
    cout << "\nFile Object Deleted\n";
    //-----------------------------------
}

int FileData(string PathToFile, int BlockNumber)
{
    ifstream inputstream (PathToFile.c_str(), ifstream::in);
    string FileData = "";
    
    for (int counter = BlockNumber; counter < 512 + BlockNumber; counter++)
    {   
        for(int counter = 0; counter < 512 * BlockNumber; counter++)
        {
            //read and discard all data up until the
            //correct block is reached
            char temp = inputstream.get();
        }
        
        //get 512 bytes of data to send
        FileData += inputstream.get();
    }
    
    if (inputstream.is_open() == true)
        inputstream.close();
    
    return 0;
}