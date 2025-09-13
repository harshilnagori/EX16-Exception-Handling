# EX16-Exception-Handling

AIM:
    To study and implement the concept of Exception Handling in C++.

SOFTWARE USED:
    Visual Studio Code (VS Code)

OBJECTIVES:

    - Understand what exceptions are and why they occur.
    - Learn how to use try, throw, and catch in C++.
    - Explore how exception handling improves program robustness.
    - Differentiate between normal program termination 
      and exception-based termination.
    - Implement exception handling for common runtime errors.

------------------------------------------------------------
THEORY:

1) DEFINITION
   - Exception handling is a mechanism in C++ used to detect 
     and respond to runtime errors. 
   - Instead of terminating abnormally, the program shifts control 
     to error-handling blocks, allowing recovery and safe continuation.

2) KEY CONSTRUCTS
   - try:
     Defines a block of code to be monitored for exceptions.
   - throw:
     Generates an exception when an error is detected.
   - catch:
     Defines a block that handles exceptions of a specific type.

3) WORKING MECHANISM
   - Normal program flow enters a try block.
   - When an error occurs, a throw statement raises an exception.
   - Control is transferred to a matching catch block.
   - If no handler matches, the program terminates.

4) COMMON USE CASES
   - Division by zero.
   - Invalid input formats.
   - Age restrictions (e.g., underage voting).
   - File errors such as file-not-found or permission denied.

5) STACK UNWINDING
   - When an exception is thrown, the runtime system 
     unwinds the stack by destroying local objects 
     created inside active functions.
   - This ensures resources are released automatically, 
     which integrates well with RAII (Resource Acquisition Is Initialization).

6) BENEFITS
   - Improves reliability by preventing crashes.
   - Keeps normal logic and error-handling logic separate.
   - Allows handling of different error types using multiple catch blocks.
   - Makes code easier to debug, maintain, and extend.

------------------------------------------------------------
CONCLUSION:
   - Exception handling in C++ provides a structured and reliable 
     way of dealing with runtime errors.
   - It prevents abrupt program termination and ensures resources 
     are properly released through stack unwinding.
   - By separating error-handling logic from normal program logic, 
     code becomes cleaner, more modular, and easier to maintain.
   - While powerful, exceptions should be used only for true 
     exceptional cases, not routine conditions, to avoid performance overhead.
   - When applied correctly, exception handling enhances 
     the robustness and overall quality of C++ applications.

------------------------------------------------------------
*/
