#include<iostream>
#include "DNA_sequencing.hpp"
using std::cout;
using std::cin;
using std::string;
using std::endl;
/*
 * This program contains a set of functions that work with arrays of
 * string objects.
 * Although the specific purpose limits the strings to a set of DNA
 * sequence bases, several functions work just as well with general
 * string arrays.
 * Author : Khalid.
 * Course : CSCI160.
 * Date : 9th nov 2019.
 */

// This function prints out the contents of the array in order,
// delimited by a comma and a space. All contents are placed 
// inside curly braces.
void 	print_array (string strings[], int strings_length){
		cout<<"{";
		for (int i=0; i<strings_length; i++){
			if (i == strings_length-1) 
				cout<< strings[i]<<"}";
			else
				cout<<strings[i]<<", ";
		}
        
    

}
// This function determines if a given DNA sequence has a mutation 
// which contaiins adjacent repeated characters.
bool 	has_mutation (string sequence){
		int count;
		bool value = false;
		count = sequence.length();
		for(int i = 0; i < count-1; i++){
			if(sequence[i] == sequence[i+1]){
				value = true;}
		}
		return value;
}
 // This function determines the first occurence of the long item
 // in the array of strings and returns it.
string 	find_longest (string strings[], int strings_length){
		string longest;
		unsigned int maxnum = 0;
		for(int i=0; i<strings_length; i++){
			if(maxnum < strings[i].length()){
				maxnum = strings[i].length();
				longest = strings[i];
			}
		}
		return longest;
} 
 // This function determines the number of times a particular DNA
 // strings occur in the array the returns its number.
int 	find_frequency(string target, string strings[], int strings_length){
         
         int count = 0;
         for(int i = 0; i <strings_length; i++){
           if(strings[i] == target){
            count++;}
            }
    return count;        
}
// counts the number of mutated DNA sequence that occur
// within an array and returns its number.
int 	count_total_mutations (string sequences[], int sequences_length){
		int count = 0;
		for(int i = 0; i < sequences_length; i++){
			if (has_mutation (sequences[i])){
				count++;
			}
		}
		return count;
}

// This function determines the number of times a particular DNA
// sequence occurs within an array of DNA sequences. 
int 	find_freq_with_mutations (string target, string sequences[], int sequences_length){
		int x =target.length();
		int k;
		int y;
		int count = 0;
		for(int j = 0; j < sequences_length; j++){
			k = 0;
			y = sequences[j].length();
			for(int i = 0; i < x; i++){
				while(k < y && target[i] == sequences[j][k]){
					k++;
				}
			}
			if(sequences[j].length() == (unsigned)k)
				count++;
		}      
		return count;           
}
 


 
