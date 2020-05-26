#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <regex>


using namespace std;

int main(int argc, char** argv) {


string input;
 
 regex regularne("[a-z]+@[a-z]+\.pl"); 
	
			ofstream plik1;
	ifstream plik;  
   
   plik.open("a.txt"); 
   
   plik1.open("b.txt");  
   
   if(plik.good())  
            while(!plik.eof())  
       
        {
        	
              
			 plik>>input;
             
			 cout<<input;
             
 			 cout<<endl;
				if(!cin) break;
                if(input=="koniec") 
                        break;
					
					
					if(regex_match(input,regularne))
				{
                        cout<<"Dobrze"<<endl;
                               plik1<<input;
                }
                else
				{
                        cout<<"To nie email!"<<endl;
                       
              	}
        
			}
			  
                   
				  				  plik.close(); 
				  
				  plik1.close(); 
cout<<endl;   
 return 0;
}
