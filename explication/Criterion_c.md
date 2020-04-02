---
module:			HUB
title:			Workshop Criterion
subtitle:		Test your program !

binary: 		tests_run
language:		C
compilation:	Makefile
build:			no need here

author:			Anthony DENIN
version:		1.0
---

#imageLeft(example.png, 90px, 11)

#space(1)
Welcome to this Workshop on Criterion ! What is Criterion ? It is a library which allows you to create unit tests, unit tests allow them to test your program according to the expected results ! The Critérion library is associated with the Coverage library which allows you to have the coverage percentage of your unit tests.#br

The purpose of this Workshop is to familiarize you with these two libraries! You will therefore work on several exercises which will allow you to learn more about the Criterion and Coverage unit tests.
#br

The Workshop consists of 5 exercises:

  * Function return in [int]
  * Function return in [char]
  * Function return in [char * or int *]
  * print on standard output
  * print on error output

#hint(The exercises are examples of tests for you to modify and adapt them to your programs.)

# COMPILATION

As you will see in the exercises, the unit tests are compiled using the Makefile which contains the rules (see the Makefile workshop) tests_run. This rule is presented in this form: (gcc) for the compilation with the flags (-- coverage --lcriterion --lgcov) and the launch of the binary test. Do not forget to add the libraries in your my.h.#br

#terminal(cat Makefile
tests_run: $(SRCS) $(SRCSTEST) clean
gcc --coverage $(SRCS) -lcriterion -lgcov $(SRCSTEST) -o $(NAMETEST).#br
./$(NAMETEST)
gcovr #br)

#warn(Attention always remember to launch your unit tests in your "units_tests" rules and not to put your main.c in the compilation of your unit tests.)

Once your unit tests launched here is the terminal output.#br#br

#terminal(./units_tests
[#color(blue, ====)] Synthesis: Tested:  #color(blue, 7) | Passing: #color(green, 7) | Failing: 0 | Crashing: 0
gcovr
-------------------------------------------------------------------------------------------------------------------------------------------------------------
#space(4) GCC Code Coverage Report
Directory: .
-------------------------------------------------------------------------------------------------------------------------------------------------------------
File #space(6) Lines #space(1) Exec #space(1) Cover #space(1)Missing
-------------------------------------------------------------------------------------------------------------------------------------------------------------
../src/error_handling.c #space(3) 7  #space(1.7) 7 #space(1.3) 100% #space(1)
../src/fill_map.c #space(4) 13  #space(1.5) 13 #space(1.3) 100% #space(1)
../src/get_map.c #space(4.2) 20  #space(1.5) 20 #space(1.3) 100% #space(1)
-------------------------------------------------------------------------------------------------------------------------------------------------------------
TOTAL #space(6.4) 40 #space(1.5) 40 #space(1.3) 100%
-------------------------------------------------------------------------------------------------------------------------------------------------------------
)

#hint(Now that you understand how the Criterion tests were launched with a Makefile, you could code your tests! The compilation that we have put in place now is compatible with Marvin's Automated Tests!)

#newpage

# Exerice 1 (Test return int)

#hint(Go to the exercise 1 folder of the github in the C part)

The goal of this exercise is to check if the return of the "error_handling.c" function is equal to 1 or 0 or 84. No worries everything is already ready you just have to modify the file "tests_return_one.c" to check the return of the function whose parameters sent to it are character strings. To do this, you will use the function "cr_...(Function_name (parameter, expected return);" #br

#hint(To successfully complete this exercise, I suggest some criterion functions.)

#quote(epitech-2022-technical-documentation|, please note that the following asserts only work for non-array comparison : #br
passes if and only if Actual is equal (or not equal, if you are using neq) to reference.
cr_assert_eq(Actual, reference)
cr_assert_neq(Actual, reference) #br
Will pass if Actual is less than (or less than or equal if you used leq) reference.
cr_assert_lt(Actual, reference)
cr_assert_leq(Actual, reference) #br
Will pass if Actual is greater than (or greater than or equal if you used geq) reference.
cr_assert_gt(Actual, reference)
cr_assert_geq(Actual, reference)#br)

If you have a problem, don't hesitate to ask for help! Good luck to everyone!

#newpage

# Exerice 2 (Test return char)

#hint(Go to the exercise 2 folder of the github in the C part)

The purpose of this exercise is to look at the return value of the "error_handling" function, if it is equal to the char e, p or o. Do not worry ! As in the previous exercise, you just have to modify the "tests_return_two.c" file to look at the return value of the function. Attention here is send in parameter a number / number. To do this, you will use the function "cr_...(Function_name (parameter, expected return);" #br

#hint(To successfully complete this exercise, I suggest some criterion functions.)

#quote(epitech-2022-technical-documentation|, please note that the following asserts only work for non-array comparison : #br
passes if and only if Actual is equal (or not equal, if you are using neq) to reference.
cr_assert_eq(Actual, reference)
cr_assert_neq(Actual, reference) #br
Will pass if Actual is less than (or less than or equal if you used leq) reference.
cr_assert_lt(Actual, reference)
cr_assert_leq(Actual, reference) #br
Will pass if Actual is greater than (or greater than or equal if you used geq) reference.
cr_assert_gt(Actual, reference)
cr_assert_geq(Actual, reference)#br)

#warn(Be careful what you use to declare the value to compare ! #br)

If you have a problem, don't hesitate to ask for help! Good luck to everyone!

#newpage

# Exerice 3 (Test return char * or int *)

#hint(Go to the exercise 3 folder of the github in the C part)

Here always the same instruction. Check the return value of the "error_handling.c" function, the return value is a char * in this exercise, you will have either "error, passed or other". Don't worry you just have to modify the "tests_return_three.c" file to check the return value of the function. You will always use the criterion library only!" #br

#hint(To successfully complete this exercise, I suggest some criterion functions.)

#quote(epitech-2022-technical-documentation|, Those functions won’t allow you to compare the output of your progam with a given reference string : #br
Just like cr_assert_eq(), but will check two strings, character by character.
cr_assert_str_eq(Actual, Reference)
cr_assert_str_neq(Actual, Reference) #br
Will pass if the string is empty (or is not empty is you used not_empty).
cr_assert_empty(Value)
cr_assert_not_empty(Value) #br)

#warn(Be careful what you use to declare the value to compare ! #br)

#hint(Whether a char * or an int *, these are the same functions and method to use!)

If you have a problem, don't hesitate to ask for help! Good luck to everyone!

#newpage

# Exerice 4 (Test print stdout)

#hint(Go to the exercise 4 folder of the github in the C part)

In this exercise, we complicate things! We no longer want to check the return values, but here the print which is done by the function on the stdout (standard output). Nothing changes, you just have to modify the "tests_print_stdout.c" file to check the print of the "error_handling.c" function. #br

#warn(Warning to watch the standard output I called the redirect criterion function!)

#hint(To successfully complete this exercise, I suggest some criterion functions.)

#quote(epitech-2022-technical-documentation|, To use the following assertions, you must include "criterion/redirect.h" along with "criterion/criterion.h". redirect.h allows Criterion to get the content of stdout and stderr and run asserts on it. You also need to create a function that calls the cr_redirect_stdout() function : #br
Compares the content of stdout with Value. This assertion behaves similarly to cr_assert_str_eq()
cr_assert_stdout_eq_str(Value)
cr_assert_stdout_neq_str(Value) #br)

#warn(Before testing your function with "cr _..." For redirects you must make a call to the function you wanted to test! #br)

If you have a problem, don't hesitate to ask for help! Good luck to everyone!

#newpage

# Exerice 5 (Test print sdrerr)

#hint(Go to the exercise 5 folder of the github in the C part)

In this last exercise (YES!), You must check the print of the attention function here, it is a print on stderr (error output). Nothing changes, you just have to complete the file "tests_print_stderr.c" to check the print of the "error_handling.c" function #br

#warn(Warning to watch the error output I called the redirect criterion function!)

#hint(To successfully complete this exercise, I suggest some criterion functions.)

#quote(epitech-2022-technical-documentation|, To use the following assertions, you must include "criterion/redirect.h" along with "criterion/criterion.h". redirect.h allows Criterion to get the content of stdout and stderr and run asserts on it. You also need to create a function that calls the cr_redirect_stdout() function : #br
Compares the content of stdout with Value. This assertion behaves similarly to cr_assert_str_eq()
cr_assert_stderr_eq_str(Value)
cr_assert_stderr_neq_str(Value) #br)

#warn(Before testing your function with "cr _..." For redirects you must make a call to the function you wanted to test! #br)

If you have a problem, don't hesitate to ask for help! Good luck to everyone!

#newpage

# Exerice 6 (It's your turn)

#hint(Go to the exercise 6 folder of the github in the C part)

It's up to you! Here is a program that makes an "Identity Card" according to the parameters entered in the function! This time, if the information is stored in a structure! You just have the program, it's up to you to find out how to do the unit tests (100%) of this project! Use all the functions seen just before. #br

#warn(Warning the EPITECH coding style must be follow in your test !)

#terminal(./exercice_6 40 Jerome Renaud | cat -e
Id card of EPITECH$
********************$
First name is : Jerome$
Last name is : Renaud$
Age is : 40$)

The unit tests for this project have been tested using the epitech docker and can be validated at 100% coverage. You must therefore check the function returns and the standard output. On this project no error handling was done. But it is possible to watch the signal send back by a function (SIGSEGV), for that here is a small link which can help you! #br

If you have a problem, don't hesitate to ask for help! Good luck to everyone!

#newpage

# Conclusion

Go boring moment the conclusion! #br

As you understood at Epitech unit testing is very important, and there are a ton of tests to run! For reasons of time, we have not shown the tests for the structures. I will nevertheless let you if necessary go check the link of the Epitech doc on the tests which is not bad. #br


You could see during this workshop, the compilation with flags, the compilation rules and what not to do! You have also seen how to create a unit test file. If you respect on all your projects this way of testing the TA will pass over it without problem every time! #br


Beyond the dimension of Epitech tests. The tests whether unit or functional are very important also in the business world, because it shows that your program has the behavior requested by your employer! #br

#warn(Thank you for participating in this Workshop!)