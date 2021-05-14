// Strings

let str = 'Hello';  str = str + ' ' + 'World';

console.log(str);  console.log(str[0]);  console.log(str.length);

console.log(str.toUpperCase()); // not changes original str ... str.toUpperCase() just returns upper case string

console.log(str.indexOf('a'));  // returns first index of char ... -1 for not found

str = str.slice(0 , 4); // slice(from , to)

str = str.substr(0,5); // substr(form , size)

str = str.replace('h' , 'b'); // replace only first occurance



// Numbers

let radius = 10;  const pi = 3.14;  let area = pi * radius**2; // ** pow

console.log(area);  console.log(area * 'hello'); // Not a Number ... NaN

console.log('hello' + area + 'world'); // String

let ts = `hello ${radius} area is ${area}`; // Template Strings



// undefined

let un;

console.log(un , un + 3 , `hello ${un}`); // undefined  NaN  hello undefined

un = null;

console.log(un , un + 3 , `hello ${un}`); // null  3  hello null



// Boolean

let email = 'adf122@gmail.com';  let bool1 = str.includes('@'); // checks if char is present or not

let name = ['fad' , 5];  let bool2 = name.includes(5); // checks if array element is present or not

console.log(4 === '4'); // strict Comparison ... First check if data type is same or not ... then value

let a = '45';

let b = Number(a); // Type Conversion ... Nan can appear



// Objects

    // Arrays
    
    let arr = ['hello' , 45 , null , 'world' , true];  arr[0] = 45;  console.log(arr);  console.log(arr.length);

    console.log(arr.join('-'));  // join arrays with char '-' ... gets total array as String

    arr = arr.concat(['dash' , true]);  console.log(arr.indexOf(45));

    arr.push(4); // returns length

    arr.pop();  // returns poped value



    // Dates  .. See Later

    // Object Literals  .. See Later