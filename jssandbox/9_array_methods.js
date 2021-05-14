// Filter  Method

const arr = [3, 2, 1, 4, 5, 6, 7, 9];  // const arr = new Array(56); new empty array of size 56 , arr.push('boy'); push element , arr.pop(); 

const arr2 = arr.filter(element =>
{
    return (element & 1);

});

console.log(arr2);



// Map Method

const arr3 = arr.map(element =>
{
    if(!(element & 1))
    return (element/2);

    else
    return element;

});

console.log(arr3);


// Reduce Method

const result = arr.reduce((acc , curr) =>  // accumulator
{
    if(!(curr & 1))
    acc += curr;

    return acc;
} , 0);  //  Initial accumulator value

console.log(result);


// Find Method

const firstelement = arr.find(curr =>  // First appearance of given condition
{
    return curr > 6;
});

console.log(firstelement);


// Sort Method

arr.sort();  // compare .... arr.sort((a , b) => return a - b);  non-decreasing

console.log(arr);


// Chaining Array Methods

const products = [
                    {name: 'mario' , price: 40} ,
                    {name: 'pop' , price: 30} ,
                    {name: 'gta' , price: 60} ,
                    {name: 'cod' , price: 90} ,
                 ];

const promos = products.filter(curr => curr.price > 40).map(curr => `The ${curr.name} costs ${curr.price}`);

console.log(promos);