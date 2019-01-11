# Developer Workbook - 7 Questions


Q1 **Describe** the properties and function of dynamic variables in C. (50 - 100 words)

In the C language, dynamic variables is grouped using a couple of standard library functions. Malloc() is used to create dynamic variables whereas free() is used to destroy them. The malloc() function allows for a single parameter, this is the size of the allowed storage place in the unit of bytes. It outputs a pointer to the location in which the memory is stored in. If the storage fails, the output returns null. The free()function gets a pointer that is outputted by the malloc() function and un-allocates the storage area. There is no sign if the output has been succeeded or has failed. Dynamic variables are important because it is not always known at compile time what size a variable needs to be. An example of a dynamic variable is an array with variable size.

ref: https://www.design-reuse.com/articles/25090/dynamic-memory-allocation-fragmentation-c.html 


Q2 **Describe** medium-size application development in detail with regard to (100 - 200 words): 
- dividing source code into multiple files
- the use of header files in C
- the use of C libraries

A medium size application development source code can be divided into multiple files to avoid confusion and make the code easier to read or make it more maintainable. If every file relates to a certain topic, developers would know exactly where to look. Each individual file is easy to track because the overall program has been split into various files. The benefit of dividing the source code into multiple files is also so that the files can be moved as a whole instead of copying and pasting. 

The use of header files in C like #include <stdio.h> allows the developer to access various libraries in the C language. In C programs it keeps all the constants and global variables and the function prototypes in the header files and includes that header file when its needed. Header files are needed because the code has to know the contents of the prebuilt libraries and the built binary of a specific project needs to know the contents of the prebuilt libraries. Firstly, the code will not pay attention to how the libraries are put together, it extracts the function prototypes and puts them into a separate file which is called the header. Once the header file is needed for the program, the code will automatically realise that ie needs to utilise the system library. Primary use of header files is to import functionalities from different libraries. 

The use of C libraries when developing a medium size app include libraries like standard libraries, math libraries, graphic libraries and crypto libraries. They allow code to be reused in different applications and they contain 3rd party software. Basically a libary in the C language is a collection of functions and declarations which is revealed for usage by other programs. It consists of an interface which is saved as a .h file and the implementation which ends in a .c file. The C standard library is a reference for coding in C to assist programmers in their projects. The C math library contains different mathematical functions which takes double as an argument and returns double as the result. Basically the C libraries are included because they function and assist in writing code that has many uses, a dedicated collection of developers are constantly making them better.
It saves writing out general functions like print to screen, calculating addition or square root because the libraries have already created them. It saves time, effort and makes the programe expandable because with the world constantly changing the application is expected to work everywhere so the library functions help because they perform the same thing on each computer.  



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
Agile software development methodology refers to a group of software development methodologies which is established iteratively. The Agile methodology includes consultation with the customer/product owner where the team splits the work to be accomplished into increments called user stories and each user story is expected to contribute to the value of the final product. It also allows for daily meeting each day at the same time, the overall team conducts a meeting to get everyone upto date on the information that is important for coordination. 

The waterfall methodology is normal process which is a linear approach to software development. This methodology includes a sequence of events consisting of gathering and documenting requirements, design, coding and unit test, perform system testing, perform user acceptance testing, fix and issues and deliver the finished product. Each of these signifies a stage of software development and each stage normally finishes before the next one can be initiated.  

Agile can be used in the C applications that we have developed by consulting with the instructors regarding the code that we have been working on so that we can fix or improve or get help on specific parts of the code. 

Waterfall methodology can be used in the C applications that we have developed by gathering the documentation in our case its the instructions that we have been given to build the program from scratch and then we were able to code and fix issues that we had along the way. 


Q7 **Outline** the development of the C language, making reference to the types of software C is intended for.
(150 - 250 words)

 The C language is a general purpose, high level language that was created by Dennis M. Ritchie who developed the UNIX Operating System at Bell Labs. The types of software the C language is used for is both low machine level languages and high level developer friendly languages. It is extremely fast and has a valuable library. C language has been important in developing many Operating systems like Unix-Kernel, Microsoft Windows utilities and a broad segment of Android OS. C language inserts algorithms and data structures easily and assists in faster computations in programs. MATLAB and Mathematica have been assisted by C. C has many family programming languages including the most popular language called C++ which is an extension of the C language and is considered to be an intermediate language because it encapsulates high and low level language features. Another one is called Ch which is a C or C++ scripting language that has extensions for shell programming and numerical computing. C is also a compiled language and it is statically typed because the variable is known at compile time. 