/* This is a reverse-literate programming (RLP) document. */
/* For more information on RLP, check out https://github.com/AeriaVelocity/reverse-literate-programming */

// == Metadata == //
#define TITLE "Pointers and Structures";
#define MODULE "Software Engineering Techniques (6COM2014-0901-2024)";
#define INSTITUTION "University of Hertfordshire";
#define AUTHOR "Arsalan Kazmi <ak22aes@herts.ac.uk>";
#define CREATED "2024-10-22";
#define UPDATED "2024-10-22";

const char NOTICE[2][200] = {
    "These are my actual lecture notes from my university course on C++ pointers and structures.",
    "Yep, this is the file that started it all.",
};

// == Imports == //
#include <iostream>
#include <string>

// == Function Signatures == //
void activity1();

int main() {
    // == Overview == //
    std::string pointers = "can access memory at a location which can change";

    std::string pointerUses[3][100] = {
        {
            "Dynamic memory allocation",
            "Often times, the amount of memory required for a variable is not known until runtime.",
            "`new` and `delete` keywords are used to allocate and deallocate memory dynamically.",
        },
        {
            "Polymorphism",
            "More about this next week, apparently.",
        },
        {
            "Data structures",
            "Well, the presentation doesn't talk about this. :)",
        },
    };

    // == Types and Operators == //

    int myNumber = 5;
    int* myPointer = &myNumber;

    std::cout << "Variable: " << myNumber << std::endl
        << "Address: " << myPointer << std::endl;

    // == Updating values == //
    *myPointer = 10;

    std::cout << "Variable: " << myNumber << std::endl
        << "Address: " << myPointer << std::endl;

    // == C strings == //
    const char* name = "Aeri";
    std::cout << "Name: " << name << std::endl;

    // == Dynamic allocation == //

    int* arrayPointer = new int[10];

    for (int i = 0; i < 10; i++) {
        arrayPointer[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arrayPointer[i] << std::endl;
    }

    delete[] arrayPointer;

    // == Activity 1 == //

    activity1();

    // == What is a pointer? == //
    struct Pointer {
        std::string purpose = "Holds a memory address";
        void definitionSyntax() {
            int number = 5;
            int* pNumber = &number;
        }

        void dynamicMemoryAllocation() {
            int* pNumber = new int;
            *pNumber = 5;
            std::cout << *pNumber << std::endl;
            delete pNumber;
        }

        std::string commonErrors[4] = {
            "Memory leaks (not calling `delete`)",
            "Dangling pointers",
            "Use-after-free (usage after deallocation)",
            "Undefined Behaviour",
        };
    };

    // == What is a structure? == //
    struct Structure {
        std::string purpose = "Group of variables";

        void definitionSyntax() {
            struct Person {
                const char* name;
                int age;
            };

            // Accessing members
            Person p;
            p.name = "Aeri";
            p.age = 23;

            std::cout << p.name << std::endl;
        }
    };
}

void activity1() {
    int repetitions;
    std::cout << "How many do you want? \n$ ";
    std::cin >> repetitions;

    // Dynamically allocate an array
    int* numbers = new int[repetitions];

    for (int i = 0; i < repetitions; i++) {
        std::cout << "Enter a number: ";
        std::cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < repetitions; i++) {
        sum += numbers[i];
    }

    int average = sum / repetitions;

    std::cout << "Sum: " << sum << std::endl << "Average: " << average << std::endl;

    delete[] numbers;
}