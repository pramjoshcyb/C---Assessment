# Developer Workbook - 7 Questions


Q1 **Describe** the properties and function of dynamic variables in C. (50 - 100 words)

In the C language, dynamic variables is grouped using a couple of standard library functions. Malloc() is used to create dynamic variables whereas free() is used to destroy them. The malloc() function allows for a single parameter, this is the size of the allowed storage place in the unit of bytes. It outputs a pointer to the location in which the memory is stored in. If the storage fails, the output returns null. The free()function gets a pointer that is outputted by the malloc() function and un-allocates the storage area. There is no sign if the output has been succeeded or has failed. Dynamic variables are important because it is not always known at compile time what size a variable needs to be. An example of a dynamic variable is an array with variable size.

ref: https://www.design-reuse.com/articles/25090/dynamic-memory-allocation-fragmentation-c.html 


Q2 **Describe** medium-size application development in detail with regard to (100 - 200 words): 
- dividing source code into multiple files
- the use of header files in C
- the use of C libraries

A medium size application development source code can be divided into multiple files to avoid confusion and make the code easier to read or make it more maintainable. 
The use of header files in C like #include <stdio.h> allows the developer to access various libraries in the C language. Function prototypes include
The use of C libraries when developing a medium size app include libraries like standard libraries, math libraries, graphic libraries and crypto libraries. They allow code to be reused in different applications. They contain 3rd party software.



Q3 **Describe** the properties and function of arrays in C. 
(50 - 100 words)

Firstly, arrays in C are a type of data structure that can hold a fixed size ordered group of elements which are all of the same type. The concept of an array is to store a group or a collection of data. 

The properties and functions of arrays in the C language is that it is an obtained data type which is referenced as primary data types like integer, char, float. The Array elements are stored in chunks of memory blocks which is then stored in the primary memory. The array name in C signifies its base address which is the address of the starting element of the array. The array's index starts at 0 and ends at the number of elements - 1. Example: if a integer of an array has 5 elements the index starts at 0 so it has a last index of 4. 
The arrays in c are declared with respect to the variables of their data type. The arrays can also be initialised when they have been declared following the normal process. 

ref:
https://www.includehelp.com/c/properties-characteristics-of-an-array.aspx 
https://www.tutorialspoint.com/cprogramming/c_arrays.htm
https://www.cs.uic.edu/~jbell/CourseNotes/C_Programming/Arrays.html


Q4 **Describe** the properties and function of file handling in C. (50 - 100 words)

The properties and functions of file handling in the C language is that firstly, the programs that are written are primarily written to save information captured from the program. The files can also be read to obtain information. A way to store this infromation is to a file. There are numerous functions that can be done on a file and some of them are:
- Creation of a new file using fopen which consists of attributes like a, a+, w or w+. 
The fopen function is used to open a file to initiate operations like reading and writing. fopen() function itself creates a new file in C and specifies the filename including the path. The file opening attributes in C like the ones mentioned above, for example the attribute a has a different working. The attribute a searches file and if it loads accurately the fopen() function loads it into memory and creates a pointer which looks at the last character. The attribute w also searches file and if the specified file is alive, the contents within it are overwritten. 
- Reading from a file by using the functions fscanf or fgetc. Both functions can be used to read a file and they both do the same operation as printf but it points to a file pointer. It can also be used to read the file line by line or character by character.
-Closing a file using fclose. This function shuts the file that its pointed to by the file pointer. This is only done when each operation has been successful. 



ref: https://www.geeksforgeeks.org/basics-file-handling-c/ 

Q5 **Describe** the properties and function of user-defined data structures in C. (100 - 200 words)

A structure is a user defined data type in the C language. A user defined structure develops a data type that can be used collect items of different types all into a single type. Structures in C are used to represent a record. To define a structure in C the struct statement is used. The function of the struct statement is that it defines a new data type which has more than one member. To gain access in any member of a structure, the operator called member access operator (.) is used. This operator is written as a period in between the structure variable name and the member that will be able to be accessed to. The keyword struct will be used to define the variables of the structure type. Unlike Javascript the members are fixed and we cannot add or delete them.

Q6 **Describe** TWO development methodologies appropriate for the development of small tools such as the ones implemented in this assessment task. (100 - 150 words)

Two development methodologies appropriate for the development of small tools are Agile and Waterfall.
Agile 


Q7 **Outline** the development of the C language, making reference to the types of software C is intended for.
(150 - 250 words)

 FOCUS ON: types of software c is used for, talk about the type of language that C is (family of langauges it belongs to), 