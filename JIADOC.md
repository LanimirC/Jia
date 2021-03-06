# Jia Documentation

This is the official documentation for Jia programming language.

## READ ME FIRST

For convenience, we invent some notations, so a list of explanations is provided below:

    Notation     | Explanation
    [values]     | value_1 value_2 value_3 ... value_n
    <expression> | Function [arguments].

## Built-in Functions

    Def Function [arguments]. <body>.
Define a function named *Function* with a list of *arguments* as its arguments, and *body* as its body and return *defined*.

    Def variable value.
Define a variable named *variable* with *value* as its value and return *defined* and return *set*.

    Set variable value.
Set the value of an existing variable named *variable* to be *value*.

    Cond <predicate_1> <expression_1>
        <predicate_2> <expression_2>
        ... ...
        <predicate_n> <expression_n>
        else <expression_else>.
Return the value of the first expression whose predicate is *true*. The last line with *else* is not necessary.

    Equal value_1 value_2.
Return *true* if *value_1* and *value_2* are equal and return *false* otherwise.

    Add value_1 value_2.
Return the sum of *value_1* and *value_2*.

    Sub value_1 value_2.
Return the difference of *value_1* and *value_2*.

    Mul value_1 value_2.
Return the product of *value_1* and *value_2*.

    Div value_1 value_2.
Return the quotient of *value_1* divided by *value_2*.

    Mod value_1 value_2.
Return the remainder of *value_1* divided by *value_2*.

    Block [<expression>s].
Execute all the *expression*s in the list and return the value returned by the last *expression*.

    Print value.
Print *value* on the terminal and return " ".

    Exit.
Quit the program.
