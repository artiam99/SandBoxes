const arr = ['John' , 'Mary' , 'Dave'];

for(let i = 0 ; i < arr.length ; i++)
console.log(`<li> ${arr[i]} </li>`);

let i = 0;

while(i < arr.length)
{
    console.log(`<li> ${arr[i]} </li>`);

    i++;
}

do
{
    console.log('hi');

    i++;
    
}while(i < arr.length);

let grade = 'C';

switch(grade)
{
    case 'A':
        console.log('A');
        break;
    case 'B':
        console.log('B');
        break;
    default:
        console.log('Fail');
        break;
}

// Scope

let age = 40;

if(true)
{
    let age = 30;

    console.log(age); // 30
}

console.log(age);  // 40