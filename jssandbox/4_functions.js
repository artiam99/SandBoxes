// Function Declaration

function greet()
{
    console.log('Hello');
}

greet();  // Hoisting Works ... Declare function later
greet();

// Function Expression

const speak = function()
{
    console.log('Hi');
}

speak();

const sum = function(a = 0 , b = 0)
{
    return a + b;
}

console.log(sum(10 , 20));

console.log(sum(10 , 50));  // Hoisting doesn't work


//Arrow Function

// const obj = 
// {
//     value: 'hello',
//     add: function(value)
//     {
//         this.value = value; // arrow function don't bind 'this' ... this.value in arrow function is an error , same for classes
//     }
// }

// const obj = 
// {
//     value: 'hello',
//     arr: ['joy' , 'robby'],
//     add: function(value)
//     {
//         this.arr.forEach(curr =>
//         {
//             console.log(this.value + curr);  // arrow function dosn't bind the this with arr object this ... So obj this remains
//          }
//     }
// }



const area = (radius) =>  // 1 parameter remove parentheses. 1 line return remove curly braces. const area = radius => 3.14 * radius ** 2;
{
    return 3.14 * radius ** 2;
};

const area2 = radius => 3.14 * radius ** 2;

console.log(area2(5));

// Methods

let name = 'John';

console.log(name.toUpperCase()); // Methods are functions associated with objects we are using


// Callback Functions

const myFunc = function(callbackfunc)  // callback functions are sent as parameters to other function 
{
    let value = 50;

    callbackfunc(value);
};

myFunc(function(value) // calling myFunc with callbackfunc as a parameter
{
    console.log(value);
});

let arr = ['mary' , 'dave' , 'rody' , 'ron'];

arr.forEach(function(person) // in forEach callbackfunc(value) is called ... default code is written already in library
{
    console.log(person);
})

const print = function(person , index) // declaring callback functions seperately
{
    console.log(`${index} => ${person}`);
}

arr.forEach(print);