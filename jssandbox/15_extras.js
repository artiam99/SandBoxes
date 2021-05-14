// Rest

const double = (...numbs) =>
{
    console.log(numbs);

    return numbs;
}

const result = double(1, 2, 3, 4, 5, 6, 7);
console.log(result);

// Spread

const people = ['Harry' , 'Ron' , 'Harmiony'];
const members = ['David' , 'Molly' , ...people];

console.log(members);


// Sets

const arr = ['boy' , 'girl' , 'party' , 'girl'];

const set = new Set(arr);

console.log(set);

const age = new Set();

age.add(6);
age.add(7);
age.delete(6);

const arr2 = [...new Set(arr)];

console.log(arr2);


// Symbols

const symbolone = Symbol('a generic name');
const symboltwo = Symbol('a generic name');

console.log(symbolone , symboltwo , typeof symboltwo);

console.log(symbolone === symboltwo); // They are different

const ninja = {};

ninja.age = 20;
ninja['belt'] = 'orange';
ninja['belt'] = 'black';

ninja[symbolone] = 'Harry'; // they will be different
ninja[symboltwo] = 'Ron';