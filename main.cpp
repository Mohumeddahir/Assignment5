/*
 * For use of students in CSCI 160 2019 (Assignment 5)
 * An incomplete tester for the DNA_sequencing functions.
 * Instructions:
 * Use the various tests to thoroughly check the functions.
 * Change the variables to create different conditions for
 * the function results.
 *
 * author B.Bultena
 */
 
#include <iostream>
#include "DNA_sequencing.hpp"
	using std::cout;
	using std::cin;
	using std::string;
	using std::endl;

int main() {

	// testing print_array
	int array_length = 9;
	string test_set[] = {
		"the","quick","brown","fox","jumps","over","the","lazy","dog"
	};
	cout << "testing the printing of an array:\n";
	print_array(test_set, array_length);
	cout << endl;
	
	// testing has_mutation
	string mut_test = "AAAC";
	cout << "Is "<<mut_test<<" mutated?\n";
	if (has_mutation(mut_test)) {
		cout << "It is.\n";
	} else {
		cout << "It is not.\n";
	}
	cout << endl;
		// testing find_longest
	test_set[7] = "indolent";
	string longest = find_longest(test_set,array_length);
	cout << "The longest word in ";
	print_array(test_set, array_length);
	cout << "is " << longest << ". It should be 'indolent'.\n";
	cout << endl;

	// testing find_frequency
	int woodchuck_length = 13;	
	string woodchucks[] = {"how","much","wood","could","a","woodchuck","chuck","if","a",
									"woodchuck","could","chuck","wood"};
	int num = find_frequency("a", woodchucks, woodchuck_length);
	cout << "The number of times the word 'a' is found in \n";
	print_array(woodchucks, woodchuck_length);
	cout << "is " << num << " and we are expecting it to be 2.\n";
	cout << endl;
	
	
	// testing count_total_mutations
	int mutant_length = 8;
	string mutants[] = {"AT", "AAT", "GT", "TG", "ATGG","GGTAA","ATT","ATTG"};
	int num_mutants = count_total_mutations(mutants, mutant_length);
	cout << "The number of total mutations in:\n";
	print_array(mutants, mutant_length);
	cout << "is " << num_mutants << " and we are expecting it to be 5.\n";
	cout << endl;
	
		// testing find_freq_with_mutations
	string target = "AT";
	int num_targets = find_freq_with_mutations(target, mutants, mutant_length);
	cout << "The number of times " << target << " is found in:\n";
	print_array(mutants, mutant_length);
	cout << "including mutations, is " << num_targets << " and we expect it to be 3.\n";
	cout << endl;


	cout << "All done.\n";
	return 0;
}

